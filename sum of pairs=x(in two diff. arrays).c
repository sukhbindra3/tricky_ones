#include<stdio.h>

void find_pairs(int A1[],int A2[],int n,int x);

void main(){
    int n,i,x;
    printf("\nEnter the size of arrays : ");
    scanf("%d",&n);
    int A1[n],A2[n];
    printf("\nEnter the first sorted array : ");
    for(i=0;i<n;i++)
        scanf("%d",&A1[i]);
    printf("\nEnter the second sorted array : ");
    for(i=0;i<n;i++)
        scanf("%d",&A2[i]);
    printf("\nEnter the sum of pairs : ");
    scanf("%d",&x);
    find_pairs(A1,A2,n,x);
}

void find_pairs(int A1[],int A2[],int n,int x){
    int i,j;
    printf("\nPairs with sum equal to %d are : ",x);
    for(i=0;i<n&&A1[i]<x;i++){
        for(j=0;j<n&&A2[j]<x;j++){
            if((A1[i]+A2[j])==x)
                printf(" (%d,%d)",A1[i],A2[j]);
        }
    }
}
