#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d", &a);
    do {
    scanf("%d", &b);
    if(b>a)
      printf("%d>?\n", b);
    else if(b<a)
      printf("%d<?\n", b);
    else
      printf("%d==?", b);
    } while (a!=b);
    

    return 0;
}
