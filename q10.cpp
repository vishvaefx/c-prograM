#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d",&a);
	a=a/100;
	b=a%10;
	c=a+b;
	printf("%d",c);
	return 0;
}