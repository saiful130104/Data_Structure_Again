#include<stdio.h>

int bin_search(int A[],int a_len, int key){
    int left=0,right=a_len-1,mid;
    while(left<=right){
        mid = (left+right)/2;
        if(A[mid]==key)
            return mid;
        if(A[mid]<key)
            left = mid+1;
        else
            right = mid-1;
    }
    return -1;
}

int main(){
    int ara[] = {1,3,5,7,8,9,10,10,10,11,12,13,14};
    int len = sizeof(ara)/sizeof(ara[0]);
    for(int i=0; i<len; i++)
        printf("%d ",ara[i]);
    printf("\n");

    while(1){
        printf("input the key value!!!!  ");
        int key;
        scanf("%d",&key);
        printf("The key value is in %d th position in the array-A\n",bin_search(ara,len,key));
    }
    return 0;

}
