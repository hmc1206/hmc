#include <stdio.h>

int main(void){
	int digith[2],num,sum,i,num1,num2;
	scanf("%d",&num);
	if(num<10){
		digith[0]=0;
		digith[1]=num;
	}
	else{
		digith[0]=num/10;
		digith[1]=num%10;
	}
	while(1){
		sum++;
		num1=digith[0]+digith[1];
		if(num1<10){
		digith[0]=0;
		digith[1]=num;
    	}
	    else{
		digith[0]=num/10;
		digith[1]=num%10;
	    }
	    num2=digith[0]+digith[1];
	    if(num2==num)break;
	    else{
		digith[0]=num/10;
		digith[1]=num%10;
	    }
	}
	printf("%d",sum);
	return 0;
}
