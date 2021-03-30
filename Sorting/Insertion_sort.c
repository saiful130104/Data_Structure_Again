#include<stdio.h>

int main(){
    int ara[] = {8,2,4,1,5};
    int i,j,item,len = sizeof(ara)/sizeof(ara[0]);
    printf("Before Sorting.\n");
    for(i=0; i<len; i++)
        printf("%d ",ara[i]);

    // Insertion sorting implementation start
    for(i=1; i<len; i++){
        item = ara[i];
        for (j = i-1; j>=0 && ara[j]>item; j--)
            ara[j+1]=ara[j];
        ara[j+1]=item;
    }
    // Insertion sorting implementation end

    printf("\n\nAfter sorting.\n");
    for(i=0; i<len; i++)
        printf("%d ",ara[i]);
    printf("\n");
}


