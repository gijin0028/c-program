#include <stdio.h>

void exam1(){
	int SIZE = 5;
	int grade[SIZE]; 
	int arr1[5] = {99,88,77,66,55}; 
	int i;
	
	for( i =0;i<SIZE;i++)
	printf("%d",arr1[i]);
	
	int arr2[] = {99,88,77,66};
	for(i=0;i<4;i++)
	printf("%d",arr2[i]);
}

void exam2(){
int i;
int num[3];

num[0]=10;
num[1]=20;
num[2]=30;
for(i = 0;i<3;i++)
printf("num[%d]=%d\n",i,num[i]);
 
}

void exam3(){
int a[10],i;
for(i=0;i<10;i++)
a[i]=5;
printf("a[5]:%d",a[5]);
printf("a[7]:%d",a[7]);
}

void exam4(){
int data[6],i;
for(i=0;i<6;i++){
	printf("������ �Է� : ");
	scanf("%d",&data[i]);
	 
}
for(i=5;i>=0;i--)
printf("%d",data[i]);
} 
void exam5(){
int score[5];
int i,sum=0;
for(i=0;i<5;i++){
	printf("%d�� �л��� ���α׷��� ������ �Է�",i+1);
	scanf("%d",&score[i]);
}

for(i=0;i<5;i++){
	sum=sum + score[i];
}
printf("����:%d\n",sum);
printf("��� : %d\n",sum/5.0);
}

void exam6(){
int score[5],i,max=0,min=0;
for(i = 0;i<5;i++){
	printf("%d�� �л��� ���α׷��� ������ �Է�",i+1);
	scanf("%d",&score[i]);
}

for(i=0;i<5;i++)
	if(score[i]> max)
		max=score[i];
for(i=0;i<5;i++)
	if(score[i]< min)
		min=score[i];
printf("�ְ�����:%d\n",max);
printf("��������:%d\n",min);
}

void exam7(){
int h[]={170,178,175,180,177,167,189};
int i,h_min=h[0],num;

for(i=0;i<7;i++){
	if(h[i]<h_min){
		h_min=h[i];
	}
}
printf("���� Ű�� ���� �л���ȣ = %d��,Ű=%dcm \n",i-2,h_min);

}

void exam8(){

}

void exam9(){

}

void exam10(){

}

void exam11(){

}

void exam12(){

}

void exam13(){

}

void exam14(){

}

void exam15(){

}

void exam16(){

}

void exam17(){

}

void exam18(){

}

void exam19(){

}

void exam20(){

}




main(){
	int num;
	while(1){
    	printf("\n������: ");
		scanf("%d", &num);
		printf("%d �� �����Դϴ�========================================================================\n", num);
		switch(num){
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
			case 6: exam6(); break;
			case 7: exam7(); break;
			case 8: exam8(); break;
			case 9: exam9(); break;
			case 10: exam10(); break;
			case 11: exam11(); break;
			case 12: exam12(); break;
			case 13: exam13(); break;
			case 14: exam14(); break;
			case 15: exam15(); break;
			case 16: exam16(); break;
			case 17: exam17(); break;
			case 18: exam18(); break;
			case 19: exam19(); break;
			case 20: exam20(); break;
            default: return 0 ;
		}
	}
}
