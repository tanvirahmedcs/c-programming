#include<stdio.h>
int main()
{
    // for (int i=0;i<=10;i++)
    // {
    //    if (i%2==0)
    //     {
    //         printf("%d Even\n",i);
    //     }
    //     else
    //     {
    //         printf("%d Odd\n",i);
    //     }
        
        
    // }
    // for (int i = 10; i >=0; i--)
    // {
    //     if (i%2==0)
    //     {
    //         printf("%d Even\n",i);
    //     }
    //     else
    //     {
    //         printf("%d Odd\n",i);
    //     }
        
    // }
    int sum=0;
    int n;
    scanf("%d",&n);
    for (int i = 0; i <=n; i++)
    {
        sum+=i;
    }
    if (sum%2==0)
    {
        printf("%d -Even\n",sum);
    }
    else
    {
        printf("%d -Odd\n",sum);
    }
    
    
    
    return 0;
    
}