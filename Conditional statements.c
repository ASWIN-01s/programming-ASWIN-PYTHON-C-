#include<stdio.h>

int main()

{

int mark;

char Grade;

printf("enter your subject mark :");

scanf("%d",&mark); 

if (mark<0 || mark>100)
{
printf("invalid score");

return 0; }

if (mark>=85 && mark<=100) Grade = 'A';

else if (mark>=70) Grade = 'B';

else if(mark>=55) Grade ='C';

else if(mark>=40) Grade ='D';

else

Grade ='F';

printf("grade :%c\n", Grade);

return 0;
}
