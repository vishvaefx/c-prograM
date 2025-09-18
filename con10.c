#include<stdio.h>
int main()
{
 int a;
 printf ("enter two numbers");
 scanf("%d",&a);

 if (a%3==0) && (a%5==0)
 printf("the number is divisible by both");
 else{
 	printf("the number is not divisible by both");
 	
 }
 return 0;
 
}