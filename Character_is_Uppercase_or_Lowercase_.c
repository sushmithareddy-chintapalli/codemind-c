#include<stdio.h>
int main()
{
    char sr;
    scanf("%c" ,&sr);
    if(sr>='A' && sr<='Z')
    {
        printf("uppercase alphabet" );
        }
        else
        if(sr>='a' && sr<='z')
        {
            printf("lowercase alphabet" );
}
else
printf("not an alphabet" );
}