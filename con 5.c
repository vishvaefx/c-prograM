#include<stdio.h>
int main()
{
 int a,b,c;
 printf ("enter two numbers");
 scanf("%d",&a);
 scanf("%d",&b);
 c=a-b;
 if (c%2==0)
 printf("the difference is eve");
 else{
 	printf("the difference is odd");
 	
 }
 return 0;
 
}