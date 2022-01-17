#include<stdio.h>

main()

printf("pick your favorite food: \n1. Pasta \n2. Burger \n3. Pizza \n4. French fries \n5. Sandwich");

int choice=0;

scanf("%d",&choice); 

switch (choice)
{
case 1:

printf("Food item-Pasta \n Price-Rs.179");

break;

case 2:

printf("Food item-Burger \n Price-Rs.129");

break;

case 3: printf("Food item-Pizza \n Price-Rs.239");

break;

case 4:

printf("food item-French fries \n Price-Rs.99");

break; 

case 5:

printf("food item-Sandwich \n Price-Rs.149");

break;
 
default:printf("invalid choice");
 }
}
