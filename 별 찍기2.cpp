#include <stdio.h>

int main(void){
	int star,i,j;
	scanf("%d",&star);
	for(i=0;i<star;i++){
		for(j=1;j<star-i;j++){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0; 
}
