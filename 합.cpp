#include <stdio.h>

int main(void){
	int num,i,n=0;
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		n+=i;
	}
	printf("%d\n",n); 
	return 0;
}
