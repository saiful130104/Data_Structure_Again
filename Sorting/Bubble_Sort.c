#include<stdio.h>

int main(){
    int ara[] = {8,2,4,1,5};
    int i,j,temp,len = sizeof(ara)/sizeof(ara[0]);
    printf("Before Sorting.\n");
    for(i=0; i<len; i++)
        printf("%d ",ara[i]);

    // Bubble sorting implementation start
    for(i=0; i<len; i++){
        int is_already_sorted = 1;
        for(j=0; j<len-i-1; j++)
            if(ara[j]>ara[j+1]){
                temp = ara[j];
                ara[j] = ara[j+1];
                ara[j+1]=temp;
                is_already_sorted = 0;
            }
        if(is_already_sorted)
            break;
    }
    // Bubble sorting implementation end

    printf("\n\nAfter sorting.\n");
    for(i=0; i<len; i++)
        printf("%d ",ara[i]);
    printf("\n");
}


