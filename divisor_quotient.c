#include <stdio.h>

int main()
{
    
int number;

int divisor;

printf ("\n Enter a number\n");
scanf("%d",&number);
// get input from user for divisor
printf ("\n Enter a divisor\n");
scanf("%d",&divisor);

int reminder = number%divisor;
printf ("\n reminder is %d", reminder);

int quotient = number/divisor;
 
printf ("\n quotient is %d", quotient);
    return 0;
}



