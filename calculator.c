#include <stdio.h>
#include <stdlib.h>



// uhmm just an addition calculator
int calculator()
{
     double num1;
     double num2;
     printf("Enter the first number of your choice!:  ");
     scanf("%lf", &num1);
     printf("Enter the second number of your choice!:  ");
     scanf("%lf", &num2);
     
     printf("Answer is: %lf", num1 + num2);
  
     
    return 0;
  
}
