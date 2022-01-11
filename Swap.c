#include<stdio.h>

int main()

{

double a,b;

printf("enter a:"); 

scanf("%lf",&a); 

printf("enter b: ");

scanf("%lf",&b);

a=a-b;
b=a+b; 
a=b-a;

printf("after swapping, a= %.21f",a); 
printf("affter swapping,b= %.21f",b);

return 0;

}
