#include<stdio.h>
int main()
{
 int a;
 printf ("enter a 3 digit number:");
 scanf("%d",&a);
 a=a%10;
 if (a%3==0)
 printf("the number is divisible by 3");
 else{
 	printf("the number is not divisible 3");
 	
 }
 return 0;
 
}