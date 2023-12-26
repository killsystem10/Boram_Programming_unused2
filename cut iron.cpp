#include <stdio.h>
int n,k,cnt,stat,non;

void input() {
    scanf("%d %d", &n,&k);
}

void process() {
    if (n<=0 || k<=0) {
        non=1;
        return;
    }
    cnt=n/k;
    if(cnt>9999) {
        stat=1;
    } else {
        stat=0;
    }
}

void output() {
    int i;
    if (stat==1) {
        printf("번호 초과 오류"); 
    } else if (non==1) {
        printf("번호 입력 오류");
    } else {
        for(i=1; i<=cnt;i++) {
            printf("F-%04d\n", i);
        }
}
}

int main() {
    input();
    process();
    output();
}