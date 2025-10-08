#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

struct student_details {
    int rollno;
    char name[20];
    int age;
    char address[50];
    char course[20];
    float fee;
};

static void strip_newline(char *s) {
    size_t n = strlen(s);
    if (n > 0 && s[n-1] == '\n') s[n-1] = '\0';
}

static void read_line(const char *prompt, char *buf, size_t size) {
    printf("%s", prompt);
    if (!fgets(buf, (int)size, stdin)) {
        buf[0] = '\0';
    }
    strip_newline(buf);
}

/* Read int safely from stdin using fgets + strtol */
static int read_int(const char *prompt) {
    char buf[64];
    char *endptr;
    long val;
    while (1) {
        read_line(prompt, buf, sizeof buf);
        if (buf[0] == '\0') {
            printf("Please enter a value.\n");
            continue;
        }
        errno = 0;
        val = strtol(buf, &endptr, 10);
        if (endptr != buf && *endptr == '\0' && errno == 0) return (int)val;
        printf("Invalid integer. Try again.\n");
    }
}

/* Read float safely using fgets + strtof */
static float read_float(const char *prompt) {
    char buf[64];
    char *endptr;
    float val;
    while (1) {
        read_line(prompt, buf, sizeof buf);
        if (buf[0] == '\0') {
            printf("Please enter a value.\n");
            continue;
        }
        errno = 0;
        val = strtof(buf, &endptr);
        if (endptr != buf && *endptr == '\0' && errno == 0) return val;
        printf("Invalid number. Try again.\n");
    }
}

static void line(void) {
    printf("--------------------------------------------------\n");
}

static void print_student(const struct student_details *s) {
    printf("Roll No : %d\n", s->rollno);
    printf("Name    : %s\n", s->name);
    printf("Age     : %d\n", s->age);
    printf("Address : %s\n", s->address);
    printf("Course  : %s\n", s->course);
    printf("Fee     : %.2f\n", s->fee);
}

/* Add a student (append to binary file) */
void addstudent(void) {
    struct student_details sd;
    sd.rollno = read_int("Enter roll no: ");
    read_line("Enter name: ", sd.name, sizeof sd.name);
    sd.age = read_int("Enter age: ");
    read_line("Enter address: ", sd.address, sizeof sd.address);
    read_line("Enter course: ", sd.course, sizeof sd.course);
    sd.fee = read_float("Enter fee: ");

    FILE *fp = fopen("students.dat", "ab");
    if (!fp) {
        perror("Cannot open students.dat for append");
        return;
    }
    if (fwrite(&sd, sizeof sd, 1, fp) != 1) {
        perror("Write error");
    } else {
        printf("\n%s added successfully.\n", sd.name);
    }
    fclose(fp);
}

/* Enquiry by roll no */
void enquiry(void) {
    int r = read_int("Enter roll no to search: ");
    FILE *fp = fopen("students.dat", "rb");
    if (!fp) { printf("No records yet.\n"); return; }
    struct student_details sd;
    int found = 0;
    while (fread(&sd, sizeof sd, 1, fp) == 1) {
        if (sd.rollno == r) {
            print_student(&sd);
            found = 1;
            break;
        }
    }
    if (!found) printf("Record not found.\n");
    fclose(fp);
}

/* Print all records */
void report(void) {
    FILE *fp = fopen("students.dat", "rb");
    if (!fp) { printf("No records.\n"); return; }
    struct student_details sd;
    int count = 0;
    while (fread(&sd, sizeof sd, 1, fp) == 1) {
        line();
        printf("Record %d:\n", ++count);
        print_student(&sd);
    }
    if (count == 0) printf("No records.\n");
    fclose(fp);
}

/* Update a record by roll no (keeps rollno same) */
void update(void) {
    int r = read_int("Enter roll no to update: ");
    FILE *fp = fopen("students.dat", "r+b");
    if (!fp) { printf("No records.\n"); return; }

    struct student_details sd;
    int found = 0;
    while (fread(&sd, sizeof sd, 1, fp) == 1) {
        if (sd.rollno == r) {
            long pos = ftell(fp) - (long)sizeof(sd);
            printf("Current record:\n");
            print_student(&sd);
            printf("\nEnter new values (leave blank to keep current):\n");

            char buf[128];

            read_line("New name: ", buf, sizeof buf);
            if (buf[0] != '\0') {
                strncpy(sd.name, buf, sizeof sd.name);
                sd.name[sizeof sd.name - 1] = '\0';
            }

            read_line("New age: ", buf, sizeof buf);
            if (buf[0] != '\0') sd.age = (int)strtol(buf, NULL, 10);

            read_line("New address: ", buf, sizeof buf);
            if (buf[0] != '\0') {
                strncpy(sd.address, buf, sizeof sd.address);
                sd.address[sizeof sd.address - 1] = '\0';
            }

            read_line("New course: ", buf, sizeof buf);
            if (buf[0] != '\0') {
                strncpy(sd.course, buf, sizeof sd.course);
                sd.course[sizeof sd.course - 1] = '\0';
            }

            read_line("New fee: ", buf, sizeof buf);
            if (buf[0] != '\0') sd.fee = strtof(buf, NULL);

            if (fseek(fp, pos, SEEK_SET) != 0) perror("fseek");
            if (fwrite(&sd, sizeof sd, 1, fp) != 1) perror("write");
            else printf("Record updated.\n");

            found = 1;
            break;
        }
    }
    if (!found) printf("Record not found.\n");
    fclose(fp);
}

/* Delete a record by roll no with confirmation */
void delete_record(void) {
    int r = read_int("Enter roll no to delete: ");
    FILE *fp = fopen("students.dat", "rb");
    if (!fp) { printf("No records.\n"); return; }

    struct student_details sd;
    int found = 0;

    /* First, find the record */
    while (fread(&sd, sizeof sd, 1, fp) == 1) {
        if (sd.rollno == r) {
            printf("\nRecord found:\n");
            print_student(&sd);

            char confirm[10];
            read_line("\nAre you sure you want to delete this record? (y/n): ",
                      confirm, sizeof confirm);

            if (confirm[0] != 'y' && confirm[0] != 'Y') {
                printf("Deletion cancelled.\n");
                fclose(fp);
                return;
            }
            found = 1;
            break;
        }
    }
    fclose(fp);

    if (!found) {
        printf("Record not found.\n");
        return;
    }

    /* Reopen files for actual delete */
    fp = fopen("students.dat", "rb");
    FILE *tf = fopen("temp.dat", "wb");
    if (!fp || !tf) { perror("File error"); return; }

    while (fread(&sd, sizeof sd, 1, fp) == 1) {
        if (sd.rollno == r) continue; // skip deleting one
        fwrite(&sd, sizeof sd, 1, tf);
    }

    fclose(fp);
    fclose(tf);

    remove("students.dat");
    rename("temp.dat", "students.dat");
    printf("Record deleted successfully.\n");
}


int main(void) {
    char choice[10];
    while (1) {
        printf("\n\t\t\tSTUDENT MANAGEMENT SYSTEM\n");
        line();
        printf("\t\t\t1. Add Student\n");
        printf("\t\t\t2. Enquiry\n");
        printf("\t\t\t3. Report\n");
        printf("\t\t\t4. Update\n");
        printf("\t\t\t5. Delete\n");
        printf("\t\t\t6. Close\n");
        line();
        read_line("Enter your choice: ", choice, sizeof choice);

        if (choice[0] == '1') addstudent();
        else if (choice[0] == '2') enquiry();
        else if (choice[0] == '3') report();
        else if (choice[0] == '4') update();
        else if (choice[0] == '5') delete_record();
        else if (choice[0] == '6') {
            printf("Application closed\n");
            break;
        } else {
            printf("Write correct option\n");
        }
    }
    return 0;
}
