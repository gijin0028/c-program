#include <stdio.h>

exam1(){
int i = 1, n, sum = 0;
scanf("%d",&n);
while (i<=n)
{
	sum = sum + i;
	i++;
}
printf("%d",sum);
}  


exam2(){
int i,sum = 0;
while(i<=30)
{
	i++;
	if(i%2==0){
		printf("%d ",i);
	}
	}
}



exam3(){
	int n,a;
	printf("4자리수 입력 : ");
	scanf("%d",&n);
	do{
		a=n%10;
		printf("%d",a);
		n = n/10 ;
	} while(n>0);
} 

exam4(){
	int n, a1= 0,a2 = 1,a3,i;
	printf("몇번째 항까지 구할까요 ?");
	scanf("%d",&n);
	for(int i = 1; i<=10; i++)
	{
		printf("%d",a1);
		a3=a2 + a1;
		a1=a2;
		a2=a3;
	 } 

} 

exam5(){
	int i,n,sum = 0;
	scanf("%d",&n);
	while(i<=n)
	{
		sum = i + sum;
		i++;
	}
	printf("%d");
	
} 


main(){
	int no;
	
	while(1){
		printf("\n문제번호:");
		scanf("%d" , &no);
		printf("%d번 문제==================\n", no);
		switch(no){
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
		}
	}
}
