#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d,&a,&b,&c");
    if(a>b && a>c)
	    printf("biggest value is a");
    else if(b>c)
	    printf("biggest value is b");
    else
	    printf("biggest value is c");
	return 0;
}