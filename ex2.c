#include<stdio.h>
#include<string.h>
#define max 50
int main()
{
    char a[max];
    gets(a);
    int length=strlen(a);
    for(int i=length-1;i>=0;i--)
    {
        printf("%c",*(a+i));
    }
    printf("\n");
    return 0;
}