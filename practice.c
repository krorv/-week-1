#include <stdio.h>

int main() {
   int size;
   int stars, blank1, blank2, blank3;
   int i,j;
   printf("please put the size");
   scanf("%d",&size);
   /*i가 5이라고 하면
    ->i가 0/blank1이 0/blank2가 8
    ->i가 1/blank1이 1/blank2가 6
    ->i가 2/blank1이 2/blank2가 4
    ->i가 3/blank1이 3/blank2가 2
    ->i가 4/blank1이 4/blank2가 0

    i가 8이라고 하면
    16개의 별 
    *              *
     *            *
    ****************

    ->i가 0/blank1이 0/blank2가 6

   blank 1 = 왼쪽 빈칸
   blank 2 = 가운데 빈칸
   */
   blank1 = 0;
   blank2 = size*2-2;
   for(i = 0; i < size; i++){
    for(j = 0; j<blank1; j++){
        printf(" ");
    }
    printf("*");
    for(j = 0; j<blank2; j++){
        printf(" ");
    }
    printf("*");
    printf("\n");
    blank1++;
    blank2-=2;
   }
   for(i = 0; i < size+1; i++){
    for(j = 0; j < size*2; j++){
    printf("*");
   }
   printf("\n");
   }
   blank3 = 1;
   stars = size*2 - 2;
    
   for(i = 0; i < size-1; i++){
    for(j = 0; j < blank3; j++){
    printf(" ");
   }
    for(j = 0; j< stars; j++){
        printf("*");
    }
    printf("\n");
   blank3++;
   stars-=2;
   }
   for(j = 0; j < size*2; j++){
    printf("*");
   }
   printf("\n");
    return 0;

}