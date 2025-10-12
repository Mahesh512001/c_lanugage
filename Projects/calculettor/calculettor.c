#include <stdio.h>
#include <stdlib.h>

void print_menu()
{
  printf("Choose the operation you want to perform: []\b\b\n");
  printf("1. Addition\n");
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n");
  printf("5. Modulus\n");
  printf("6. power\n");
  printf("7. Exit\n");
  printf("Enter your choice: [ ]\b\b");
}

int main()
{
  int choice;
  double first, second, result;
  printf("\t\t\t\tWelcome to Calculetor\n");
  printf("\t\t\t\t===================\n\n");
  while (1)
  {

    print_menu();
  // scanf returns number of successfully read items
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input! Please enter a number.\n");

            // clear input buffer
            while (getchar() != '\n');

   
        }
    if (choice<1 || choice >7)
    {
      printf("Invailid choice! please try again.\n");
   
    }
    
     
    else if (choice == 7)
    {
      printf("Exiting the program. Goodbye!\n");
      break;
    }
   else{
   
      printf("Enter first numbers: ");
      scanf("%lf", &first);
  
      printf("Enter second numbers: ");
      scanf(" %lf", &second);
      switch (choice)
      {
        case 1://addition
        result = first + second;
        break;
        case 2://subtraction
        result = first - second;
        break;
        case 3://multiplication
        result = first * second;
        break;
        case 4://division
        result = first / second;
        break;
        case 5://modulus
        result  = (int)first % (int)second;// type casting is compulsroy because % operator only woeks with integers not with float or double
        break;
        case 6://power

        for(int i = 0; i < (int)second; i++)
        {
          result = first * first;
        }
        break;
        default:
          printf("Invalid choice! Please try again.\n");
      }
      printf("The result is: %.2lf\n\n\n\n", result);
      printf("============================================\n\n\n");
  }
}
  return 0;
}