#include <stdio.h>

exam1(){
	int i,su,cnt=0;
	printf("�����Է� : ");
	scanf("%d",&su);
	i = 1;
	while(i<=su){
		if(su%i==0)
		cnt++;
		i++;
	} 
	if(cnt==2)
	printf("%d�� �Ҽ� \n",su);
	else
	printf("%d�� �Ҽ��� �ƴϴ�\n",su);

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
		printf("\n������ȣ:");
		scanf("%d" , &no);
		printf("%d�� ����==================\n", no);
		switch(no){
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
		}
	}
}
