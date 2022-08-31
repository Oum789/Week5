#include <stdio.h>
#include <string.h>
int main()
{
    int i,j;
    char str[100];
    scanf("%s", str);
    int k=strlen(str);
    for(i=k;i>0;i--)
    {
        for(j=0;j<k;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
        k=k-1;
    }
    return 0;
}
