#include <stdio.h>

int main() {
    // printf("Recently I heard that you’ve achieved 95%% marks in your exam. "
    //        "This is brilliant! "
    //        "I wish you’ll shine in your life! Good luck with all the barriers(/\\) in your life.\n");
    int a,b,c,d,e,f;
    scanf("%d %d",&a,&b);
     c=a+b;
     d=a-b;
     e=b-a;
     f=a*b;
     float div1, div2;
    div1 = (float)a / b;
     div2 = (float)b / a;
    if (a+b)
    {
        printf("%d",c);
    }
    else if (a-b)
    {
        printf("%d",d);
    }
    else if (b-a)
    {
        printf("%d",e);
    }
    else if (a*b)
    {
        printf("%d",f);
    }
    else if (a/b)
    {
        printf("%d / %d = %.2f\n", a, b, div1);
    }
    else if (b/a)
    {
        printf("%d / %d = %.2f\n", b, a, div2);
    }
    
    
    return 0;
}