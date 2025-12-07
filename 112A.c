
#include <stdio.h>
#include <string.h>

int main(){
    char s1[100],s2[100];
    scanf("%s %s",s1, s2);

    for (int i=0;s1[i]!='\0';i++) {
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }

    int result=strcmp(s1,s2);

    if (result<0)
        printf("-1\n");
    else if (result >0)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
