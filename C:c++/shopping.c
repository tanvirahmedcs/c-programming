#include<stdio.h>
int main()
{
    int buddget;
    scanf("%d",&buddget);
    if (buddget>=10000)
    {
        printf("she will buy a Gucci Bag\n");
        if (buddget>20000)
        {
            printf("she will also buy a Gucci Belt.\n");
        }
        
    }
    else if (buddget>=5000)
    {
        printf("she will buy a Levis Bag\n");
    }
    else
    {
        printf("she will buy Something\n");
    }
    
    
    return 0;
}