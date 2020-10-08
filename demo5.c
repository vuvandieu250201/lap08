#include<stdio.h>

main()
{
	register int i;
	int no,sum,digit;
	printf("hien thi cac so :\n ");
	for(i=1;i<=999;i++)
	{
		sum = 0;
		no =i;
		while (no){
			digit = no%10;
			no =no/10;
			sum = sum +digit *digit *digit;
		}
		if(sum==i)
		printf("hien thi i %d\n",i);
	}
		
}
