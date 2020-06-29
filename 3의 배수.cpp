#include <stdio.h>

int main(void) {
    char c;
    int i=0, sum=0, cnt;
    while(1) {
        scanf("%c", &c); //한 글자씩 입력받음
        if (c=='\n') break;
        sum+=c-'0'; //일단은 각 자리 숫자를 더해줌
        i++; //몇자리 숫자인지 계산
    }
    if (i==1) printf("0\n"); //한자리 숫자면 0 출력
    else {
        cnt=1; // sum을 구하면서 한번 각 자리 숫자를 더했으므로 1로 초기화
        while (sum>=10) { // 두자리 이상의 숫자일 경우 반복하면서 cnt를 1 증가시킴
            int t=sum, tmp=0;
            while (t>0) {
                tmp+=t%10;
                t/=10;
            } // 각자리 숫자를 더하는 과정
            cnt++;
            sum=tmp;
        }
        printf("%d\n", cnt);
    }
    if (sum%3==0) printf("YES\n");
    else printf("NO\n");
    return 0;
}
