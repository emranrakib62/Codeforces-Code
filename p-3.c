#include<stdio.h>
#include<string.h>
int main()
{
   char N[20];
   scanf("%s",N);
   
   int len=strlen(N);
   printf("%c\n",N[len-3]); 
    
    
    
    return 0;
}
