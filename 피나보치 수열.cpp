#include <stdio.h>

int main(void){
        int i ;
        int num;
        int head = 0;
        int mid = 0;
        int rear = 1;

        printf("�Ǻ���ġ �� �Է� : ");
        scanf("%d" , &num) ;

        for(i = 0 ; i < num ; i++){
                mid = head+rear;
                head = rear;
                rear = mid;
        }
         printf("%d", head) ;
        return 0 ;
}
