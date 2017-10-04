#include<stdio.h>
#define N 100

int A[N];

void movecard(int );

void main(){
    int n,i,op=0,k;
    printf("\nEnter the size of array : ");
    scanf("%d",&n);
    printf("\nEnter the array : ");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    for(i=0;i<n;i++){
        for(k=1;k<n;k++){
            if(A[k]==A[0]-1){
                movecard(A[k]);
                op++;
            }
        }
    }
    printf("\nHere minimum %d operations required ",op);
    printf("\nSorted array is : ");
    for(i=0;i<n;i++)
        printf("  %d",A[i]);
}

void movecard(int x){
    int i=0,temp,j;
    while(A[i]!=x)
        i++;
    temp=A[i];
    for(j=i;j>0;j--)
        A[j]=A[j-1];
    A[0]=temp;
}
