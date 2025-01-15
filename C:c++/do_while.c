#include<stdio.h>
int main()
{
    int i;
    i=0;
    do
    {
       if(i%2==0)
       {
           printf("%d Even\n",i);
       }
       else
       {
           printf("%d Odd\n",i);
       }
       i+=3;
    }while (i<=10);

}