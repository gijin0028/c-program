#include <stdio.h>
#include <string.h>
exam1(){
char str[10];
printf("����� �̸��� �����Դϱ�?:") ;
scanf("%s",str);
printf("�ȳ��ϼ��� %s�� \n",str) ;
} 

exam2(){
char str1[6]={'H','e','l','l','o','\0'};
char str2[]="world!";
int i;
printf("STR1 : %s\n",str1);
printf("STR2 : %s\n",str2);

printf("STR1�� ����: %d\n",strlen(str1));
printf("STR2�� ����: %d\n",strlen(str2));

for(i=0;str2[i] !='\0';i++);
printf("%c",str2[i]);

str2[5]='*';
int a[10];

printf("sizeof : %d\n",sizeof(int));
printf("sizeof : %d\n",sizeof(char));
printf("sizeof : %d\n",sizeof(float));
printf("sizeof : %d\n",sizeof(double));
printf("sizeof : %d\n",sizeof(long));
} 
// ���ǻ��� strlen : ���ڿ��� ����(NULL ����? X)
// siceof : �ش� ������ �޸𸮸� �����ϴ� ũ�� 

exam3(){
	int i;
	char str[]="Good Time";
	
	for(i=0;i<strlen(str);i++)
	printf("str[%d] = %c\n",i,str[i]);
	
} 

exam4(){
char a[]="Seoul Rovotics";
printf("%s\n",a);
a[5]='\0';
printf("%s\n",a);
} 

exam5(){
	char voca[50];
	int len = 0;
	printf("���ܾ� �Է� : ");
	scanf("%s",voca);
	while(voca[len]!='\0')
	len++;
	printf("�Է��� ���ܾ��� ���̴� %d \n",len) ;
} 
exam6(){
	char str[100];
	int i;
	fflush(stdin);
	printf("���ڿ� �Է� : ");
	gets(str);
	printf("���� : %d",strlen(str)); 
	printf("%s\n",str);
	
	for(int i = strlen(str)-1;i>=0;i--)
	printf("%c",str[i]);
}
exam7(){
	int a[2][3] = {{100,90,80}, {70,60,50}};
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++)
		printf("%4d",a[i][j]);
		printf("\n");
	}
}
exam8(){
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
			case 6: exam6(); break;
			case 7: exam7(); break;
			case 8: exam8(); break;
		}
	}
}
