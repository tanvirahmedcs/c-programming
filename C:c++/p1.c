#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// int main() {

//     printf("I Love Practice");  
//     return 0;
// }

int main() {
    // Printing the required lines
    //printf("Hello, world! I am learning C programming language. ^_^\n");
    //printf("Programming is fun and challenging. /\\/\\/\\\n");
    //printf("I want to give my 100%% dedication to learn!\tI will succeed one day.\n");
    //int a, b;
    //scanf("%d %d", &a, &b);
    //long long int c = (long long int)a * b;
    //printf("%lld", c);
    //int n;
    //scanf("%d",&n);
       // for (int i=1;i<=n;i++)
       // {
            //if(i%3==0)
            //{
              //  printf("%d Yes\n",i);
            //}
            //else{
              //  printf("%d no\n",i);
            //}
          //  if(i%3==0&&i%7==0)
            //{
             //   printf("%d \n",i);
           // }
            
      //  } 
     


    int N;
    scanf("%d", &N);
    
    if (N > 1000) {
        printf("I will buy Punjabi\n");
        N -= 1000; // Subtract the cost of the Punjabi
        
        if (N >= 500) {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        } else {
            printf("Bad luck!\n");
        }
    } else {
        printf("Bad luck!\n");
    }

    return 0;

}
