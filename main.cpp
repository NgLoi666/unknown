#include <stdio.h>
#include <stdlib.h>

int SHH(int n, int Tong) {
    for (int i = 1; i <= n; i++) {
        if (n%i == 0) {
            Tong += i;
        }
    }
    if (Tong==n) {
        return Tong;
    }
    else return 0;
}
int main() {
    //fopen("out.txt","w");
    int active=1;
    int Tong=0;
    int n=2;
    while (active) {
        if (n%2!=0&&SHH(n,Tong)!=0) {

            active=-1;
            break;
        }
        printf("n=%d\n",n);
        n++;
    }
    return 0;
}