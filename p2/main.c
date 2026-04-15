#include <stdio.h>

int main(void)
{
    // 변수 선언
    char a;  
    // 변수 선언과 동시에 0으로 초기화
    int b, count1=0, count2=0, max1=0, max2=0; 
    // 입력될 문자 개수 입력
    scanf("%d", &b); 
    // 1부터 시작해서 b보다 커질 때까지 반복 
    for(int c=1;c<=b;c++) {
    scanf(" %c", &a);
    // 입력된 문자가 영어 소문자일 때
        if(a>='a' && a<='z') {
         // 소문자가 나올때마다 +1   
         count1++; 
         // 카운트 값이 최댓값보다 커지면, 그 카운트 값을 최댓값에 저장   
         if(count1>=max1) {max1=count1;
         }
     }
     // 소문자가 안 나오면 카운트를 0으로 초기화       
     else {
         count1=0;
     }
     // 입력된 문자가 숫자일 때   
     if(a>='1' && a<='9') {
         // 숫자가 나올 때마다 +1
         count2++;
         // 카운트 값이 최댓값보다 커지면, 그 카운트 값을 최댓값에 저장
         if(count2>=max2) {max2=count2;
         }
     }
     // 숫자가 안 나오면 카운트를 0으로 초기화    
     else {
         count2=0;
     }
     // 영어 대문자가 나오면 모든 카운트값을 0으로 초기화   
        if(a>='A' && a<='Z') {
         count1=0;
         count2=0;
     }
    }
    // 연속된 문자들의 최대 개수를 출력
     printf("%d\n", max1);
     printf("%d", max2);
     

    return 0;
}
