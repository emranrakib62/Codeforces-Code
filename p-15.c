#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d",&A,&B,&C);

    int sum1=A+B;
    int sum2=A+C;
    int sum3=B+C;

    int maxSum=sum1;
    if(sum2 > maxSum) maxSum = sum2;
    if(sum3 > maxSum) maxSum = sum3;

    printf("%d\n",maxSum);
    return 0;
}

