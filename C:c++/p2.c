#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int A,B;
    scanf("%d %d",&A,&B);
    //int sum=A+B;
    //printf("%d",sum);
   // if (A>=B)
   // {
     //   printf("Yes");
   // }
   // else
   // {
     //   printf("No");
    //}
    if(A%B==0 ||B%A==0)
    {
        printf("Multiples");
    }
    else
    {
        printf("No Multiples");
    }
    return 0;
}