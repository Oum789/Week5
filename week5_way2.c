#include <stdio.h>
#include <string.h>
char str[100];
char Sadeenz(char x[])
{
    int y,z;
    for(y=strlen(str);y>0;y--)
    {
        str[y]='\0';
        for(z=0;z<strlen(str);z++)
        {
            printf("%c",str[z]);
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    scanf("%s", str);
    Sadeenz(str);
    return 0;
}

