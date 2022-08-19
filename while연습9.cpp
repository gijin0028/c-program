#include<stdio.h>
main()
{
	int i=0 ,sum = 0;
	while(1){
		
		i++;

if(i%3==0){
	printf("%d\n",i);
	sum = i+sum;
}

		if(i>=100)
		{break;	}
	} 
	printf("%d",sum);
}
