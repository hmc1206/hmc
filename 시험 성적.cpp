#include <stdio.h>

int main (void)
{
    int a;
    scanf("%d",&a);
    
     if(a>=90 &&a<=100){printf("%s","A");}
     else if(a>=80 &&a<=89){printf("%s","B");}
     else if(a>=70 &&a<=79){printf("%s","C");}
     else if(a>=60 &&a<=69){printf("%s","D");}
     else{printf("%s","F");}
	return 0;
}
