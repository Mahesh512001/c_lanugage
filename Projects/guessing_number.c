#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  printf("Welcome to the guessing number game\n");

  int guess;
  int count = 0;
  long long int number;
  srand(time(0));
  number = rand() % 100 + 1;

  do
  {
    count++;
    printf("You have to guess a number between 1 to 100\n");
    scanf("%d", &guess);
    if (guess > number)
    {
      printf("your gress is bigger than the number \n");
    }
    else if (guess < number)
    {
      printf("Your gress is smaller than the number \n");
    }
    else
    {
      printf("congratulations you guessed the number parfect in %d attempts \n", count);
      break;
    }
  } while (guess != number);
  return 0;
}