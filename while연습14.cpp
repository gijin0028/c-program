#include<stdio.h>
 void func1(){
 	printf("1번 함수입니다.");
 	
 }
  void func2(){
 	int n, count = 0, sum = 0;
 	do{
 		scanf("%d", &n);
 		if(n<1){continue;}
 		sum = sum + n;
 		count ++;
	 }while(count<5);
	 printf("sum = %d\n",sum);
	 
 }
main()
{
	int no;
	while(1){
		printf("함수번호 : ");
		scanf("%d", &no);
		switch(no){
			case 0:
				return 0; 
			case 1:
				func1();
				break;						
			case 2:
				func2();
				break;
			default :
				printf("잘못된 함수 번호입니다");
		} 
	}
 } 

