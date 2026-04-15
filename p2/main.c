#include <stdio.h>

int main(void)
{
    char a;
    int b, count1=0, count2=0, max1=0, max2=0;
    scanf("%d", &b);
    for(int c=1;c<=b;c++){
    scanf(" %c", &a);
     if(a>='a' && a<='z') {
         count1++;
         if(count1>=max1) {max1=count1;
         }
     }
     else {
         count1=0;
     }
     if(a>='1' && a<='9') {
         count2++;
         if(count2>=max2) {max2=count2;
         }
     }
     else {
         count2=0;
     }
    }
     printf("%d\n", max1);
     printf("%d", max2);
     

    return 0;
}
