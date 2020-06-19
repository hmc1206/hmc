#include <stdio.h>

int main(void){
	int num1,num2,re,mai,nder;
	scanf("%d%d",&num1,&num2);
	re= num2%10;
	printf("%d\n",num1*re);
	mai=(num2%100)/10;//385%100=85,80/10=8,
	printf("%d\n",num1*mai);
	nder=num2/100;
	printf("%d\n",num1*nder);
	printf("%d\n",num1*num2);
	return 0;
}
