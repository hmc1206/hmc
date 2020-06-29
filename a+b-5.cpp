#include <stdio.h>

int main(void){
	int n=1,num1,num2;
	while(n){
		scanf("%d %d",&num1,&num2);
		if(num1 ==0 &&num2==0){
			break;}
		else {printf("%d\n",num1+num2);}
	}
	return 0;
}
