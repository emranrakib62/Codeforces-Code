#include <stdio.h>

int main() {
    int y;
    scanf("%d",&y);

    for (int year = y+1; ;year++){
        int seen[10]={0};
        int temp=year;
        int ok=1;

        while (temp>0){
            int digit=temp%10;
            if (seen[digit]) {
                ok=0;
                break;
            }
            seen[digit]=1;
            temp=temp/10;
        }

        if (ok){
            printf("%d\n",year);
            break;
        }
    }
    return 0;
}

