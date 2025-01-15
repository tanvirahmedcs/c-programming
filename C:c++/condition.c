#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if (tk>=5000)
    {
        printf("We will go to Cox's Bazar\n");
        if (tk>=10000)
        {
            printf("We will go to sent martin\n");
        }
        else
        {
            printf("We will go to khulna\n");
        }
        
    }
    else
    {
        printf("We will not go to anywhere\n");
    }
    
    return 0;
}