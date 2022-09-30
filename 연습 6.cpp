#include <stdio.h>

exam1(){
	int a,b,temp,i;
	printf("*** 두 수 구간의 숫자 출력하기 ***\n");
	printf("두 수 입력 : ");
	scanf ("%d %d",&a, &b);
	if(a>b){
		temp = a;
		a = b;
		b = temp;
	} 
	for(int i=a;i<=b;i++)
	printf("%d",i);

} 

exam2(){
int i,j;
for(int i=0;i<=5;i++)
{
	for(int j=4;j>=i;j--){
		printf("0");
	}
	printf("*\n");
}
} 

exam3(){
	int i,j;
	for(i=1;i<=9;i++){
		for(j=2;j<=5;j++)
		printf("%2d * %2d = %2d\t ", j,i,i*j);

			printf("\n");
	}
	printf("\n");
		for(i=1;i<=9;i++){
		for(j=6;j<=9;j++)
		printf("%2d * %2d = %2d\t", j,i,i*j);
			printf("\n");
	}
} 

exam4(){
int i,j;
for(i=1;i<=5;i++)
{
	for(j=1;j<i;j++){
		printf("*");
	}
	printf("\n");
}
for(i=4;i>=1;--i){
	for(j=1;j<i;++j)
	printf("*");
	printf("\n");
}
} 

exam5(){
	int i=0,sum=0;
	while(1)
	{
		i++;
		if(i>10)break;
		if(i%5==0) continue;
		sum = sum + i;
	}
	printf("sum = %d\n", sum);
	
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
