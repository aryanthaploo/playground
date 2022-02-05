#include <stdio.h>

int main()
{
    
int a;
printf("value of a before assigning any valueis %d",a);
a=6;
printf("\b value of a is   %d",a);
if(a==5){
    printf("\n value is equal");
}
else{
    printf("\n values are not equal");
}

printf ("\n Enter a number\n");
//scanf("%d",&a);

 if (a%2==0)
printf ("number is even");

 if ((a%2)!=0)
printf ("number is odd");

    return 0;
}



