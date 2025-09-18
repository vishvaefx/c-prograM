#include<stdio.h>
int main()
{
 int a;
 printf ("enter a 3 digit number:");
 scanf("%d",&a);
 a=a/100;
 if (a%2==0)
 printf("the number is even");
 else{
 	printf("the number is odd");
 	
 }
 return 0;
 
}