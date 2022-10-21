#include<stdio.h>
main()
{
	int money;
	int danwi=1;
	int won;
	int count; 
	
	printf("*입력한 용돈의 화폐숫자 구하기*\n");
	printf("금액을 입력하세요 : ");
	scanf("%d",&money);
	
	while(1){
		if(money<=0)
		break;
		
		won = money%10;
		printf("%d원 %d개",danwi,won);
		money = money/10;
		danwi*=10;
	
	}
	printf("총 %d종류의 화폐가 필요",count);
}
