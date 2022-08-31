#include <stdio.h>
#include <string.h>
char str[100];
char JR(char x[])
{
    int i,j;
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
int main()
{
    
    scanf("%s", str);
    JR(str);
    return 0;
}
