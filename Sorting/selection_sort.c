#include<stdio.h>

int main(){
    int ara[] = {10,5,2,8,7};
    int i,j,min_index,temp,len = sizeof(ara)/sizeof(ara[0]);
    printf("Before Sorting.\n");
    for(i=0; i<len; i++)
        printf("%d ",ara[i]);

    // selection sorting implementation start
    for(i=0; i<len-1; i++){
        min_index = i;
        for(j=i+1; j<len; j++)
            if(ara[j]<ara[min_index])
                min_index=j;
        if(min_index != i){
            temp = ara[i];
            ara[i]=ara[min_index];
            ara[min_index]=temp;
        }
    }
    // Selection sorting implementation end

    printf("\n\nAfter sorting.\n");
    for(i=0; i<len; i++)
        printf("%d ",ara[i]);
    printf("\n");
}

