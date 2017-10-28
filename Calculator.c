#include <stdio.h>

int main()
{
  int n;
  float num1, num2, result;
  char answer;

do
{
  printf("\nWhat operation do you want to perform?\n");
  printf("Press 1 for addition.\n");
  printf("Press 2 for subtraction.\n");
  printf("Press 3 for multiplication.\n");
  printf("Press 4 for division.\n");
  scanf("%d", &n);
  printf("Please enter a number.\n");
  scanf("%f", &num1);
  printf("Please enter the second number.\n");
  scanf("%f", &num2);

  switch(n)
  {
    case 1: result = num1 + num2;
          printf("The addition of the two numbers is %.3f\n", result );
          break;
    case 2: result = num1 - num2;
          printf("The subtraction of the two numbers is %.3f\n", result );
          break;
    case 3: result = num1 * num2;
          printf("The multiplication of the two numbers is %.3f\n", result );
          break;
    case 4: result = num1 / num2;
          printf("The division of the two numbers is %.3f\n", result );
          break;
    default: printf("Wrong input!!!");
  }
  printf("\nDo you want to continue, y/n?\n");
  scanf(" %c", &answer);

}

while(answer == 'y');
return 0;

}
