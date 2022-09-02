#include<stdio.h>
exam1(){
		int i;
	for(i = 0; i<3; i++){
		printf("13342424");
	}
}	
exam2(){
		int i;
	for(i = 1; i<7; i++){
		printf("i=%d\n",i);
	}
}
exam3(){
	int i, sum = 0;
	for(i = 1; i<=10; i++)
	{sum = sum + i;
		}	
		printf("%d\n",sum);
}
exam4(){
	int i,even,odd;
	even=odd=0;
	for(i = 1; i<=100; i++){
		if(i%2==0)
		even = even + i;
		else
		odd = odd + i;
	}
	printf("Â¦¼öÇÕ = %d, È¦¼öÇÕ = %d\n",even,odd);
}
exam5(){
	int i;
	for(i = 1; i<10; i++){
		printf("2 * %d = %d\n",i,2 * i);
	}
}
main()
{
int no;
while(1){
	printf("¹®Á¦¹øÈ£ : ");
	scanf("%d",&no);
	
	switch(no){
		case 1: exam1(); break;
		case 2: exam2(); break;
		case 3: exam3(); break;
		case 4: exam4(); break;
		case 5: exam5(); break;

	}
}
}
