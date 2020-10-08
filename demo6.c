#include <stdio.h>


main(){
	int a,b,c;
	a=b=c=0;
	printf("enter 1st integer: \n");
	scanf("%d", &a);
	printf("enter 2st integer :\n");
	scanf("%d", &b);
	c = adder(a,b);
	printf(" a va b main %d & %d \n",a,b);
	printf("c is %d\n", c);
	
}
adder(int a, int b){
	int c;
	c = a +b;
	a *=a;
	b +=5;
	printf("a va b %d & %d\n", a,b);
	printf("c is %d\n", c);
	return (c);
}
