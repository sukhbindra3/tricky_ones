#include<stdio.h>

void main(){
    int i,j,temp,n,max=0;
    printf("\nEnter the size of array : ");
    scanf("%d",&n);
    int A[n];
    printf("\nEnter the array : \n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(A[i]>=A[j]){
                temp = A[i]%A[j];
                if(temp>max)
                    max = temp;
            }
        }
    }
    printf("\nMr. modulo your answer is : %d",max);
}
