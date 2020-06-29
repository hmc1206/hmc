#include <stdio.h>

int main(void){
	int hour,min;
	int hour2,min2;
	scanf("%d %d",&hour,&min);
	min=min-45;
	if(min<0){
		hour-=1;
		min=60+min;
	}
	if(hour<0){
		hour=23;
	}
	printf("%d %d ",hour,min);
	return 0;
}
