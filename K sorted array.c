#include<stdio.h>

void K_sorted_array(int A[] ,int ,int);

void main(){
    int n,i,k;
    printf("\nEnter the size of array : ");
    scanf("%d",&n);
    int A[n];
    printf("\nEnter the arrat : ");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    printf("\nFind the value of sorted order : ");
    scanf("%d",&k);
    K_sorted_array(A,n,k);
}

void K_sorted_array(int A[],int n,int k){
    int i,j,count;
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(A[j]<A[i])
                count++;
            }
        if((count-i)>k||(count - i)<-k){
            printf("\nGiven array is not a k sorted array ");
            break;
        }
    }
}
