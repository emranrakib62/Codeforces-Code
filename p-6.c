#include <stdio.h>

int main() {
    long long A,B,C,D;
    scanf("%lld %lld %lld %lld",&A,&B,&C,&D);
    long double result=((long double)A*B+C)/D;
    printf("%.12Lf\n",result);
    return 0;
}


