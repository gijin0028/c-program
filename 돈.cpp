#include<stdio.h>
main()
{
	int money;
	int danwi=1;
	int won;
	int count; 
	
	printf("*�Է��� �뵷�� ȭ����� ���ϱ�*\n");
	printf("�ݾ��� �Է��ϼ��� : ");
	scanf("%d",&money);
	
	while(1){
		if(money<=0)
		break;
		
		won = money%10;
		printf("%d�� %d��",danwi,won);
		money = money/10;
		danwi*=10;
	
	}
	printf("�� %d������ ȭ�� �ʿ�",count);
}
