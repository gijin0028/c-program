#include <stdio.h>

exam1(){
	int i,su,cnt=0;
	printf("숫자입력 : ");
	scanf("%d",&su);
	i = 1;
	while(i<=su){
		if(su%i==0)
		cnt++;
		i++;
	} 
	if(cnt==2)
	printf("%d는 소수 \n",su);
	else
	printf("%d은 소수가 아니다\n",su);

} 

exam2(){

} 

exam3(){
} 

exam4(){

} 

exam5(){
	
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
