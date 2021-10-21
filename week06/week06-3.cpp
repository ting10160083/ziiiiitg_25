#include <stdio.h>
int main()
{
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);
	if(a>c){
	temp=a;
	a=c;
	c=temp;
	}
	if(b>c){
    temp=b;
	b=c;
	c=temp;
	}
	printf("c:%d",c);
}
