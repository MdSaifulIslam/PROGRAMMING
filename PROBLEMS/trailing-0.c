#include<stdio.h>

int main(void){

    int n, i, count = 0;
    scanf("%d", &n);

    //loop for summing the zeroes
    
    for(i = 5; n/i>1; i *= 5){
        count += n/i;
    }

    printf("Total zeroes-0 is trailing: %d\n", count);
    return 0;
}