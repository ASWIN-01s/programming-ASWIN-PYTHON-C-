#include<stdio.h>

main()

{

int a, b, n;

printf("enter number of rows"); 

scanf("%d", &n); 

for(a=0; a<n; ++a){ 

  for(b=0;b<=a;++b){ 

   printf("01"); 
 }
printf("\n");
}
return 0;

}
