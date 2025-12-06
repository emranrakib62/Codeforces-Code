#include <stdio.h>
#include <string.h>

int main() {
    int n,x=0;
    char s[4];
    scanf("%d", &n);
    while(n--) {
        scanf("%s", s);
        if(strstr(s, "++") != NULL) {
            x++;
        } else {
            x--;
        }
    }
    printf("%d\n", x);
    return 0;
}

