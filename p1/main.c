#include <stdio.h>

int main(void)
{
    int a, b, c=0;
    scanf("%d", &a);
    do {
    scanf("%d", &b);
    if(b>a)
      printf("%d>?\n", b);
    else if(b<a)
      printf("%d<?\n", b);
    else
      printf("%d==?\n", b);
    c+=1;
    } while(a!=b);
    printf("%d", c);
    
    return 0;
}
