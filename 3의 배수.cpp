#include <stdio.h>

int main(void) {
    char c;
    int i=0, sum=0, cnt;
    while(1) {
        scanf("%c", &c); //�� ���ھ� �Է¹���
        if (c=='\n') break;
        sum+=c-'0'; //�ϴ��� �� �ڸ� ���ڸ� ������
        i++; //���ڸ� �������� ���
    }
    if (i==1) printf("0\n"); //���ڸ� ���ڸ� 0 ���
    else {
        cnt=1; // sum�� ���ϸ鼭 �ѹ� �� �ڸ� ���ڸ� �������Ƿ� 1�� �ʱ�ȭ
        while (sum>=10) { // ���ڸ� �̻��� ������ ��� �ݺ��ϸ鼭 cnt�� 1 ������Ŵ
            int t=sum, tmp=0;
            while (t>0) {
                tmp+=t%10;
                t/=10;
            } // ���ڸ� ���ڸ� ���ϴ� ����
            cnt++;
            sum=tmp;
        }
        printf("%d\n", cnt);
    }
    if (sum%3==0) printf("YES\n");
    else printf("NO\n");
    return 0;
}
