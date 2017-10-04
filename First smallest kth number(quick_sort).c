#include<stdio.h>

int k;

int quick_sort(int A[],int beg,int end);
int partition(int A[],int beg,int end);
void swap(int *a,int *b);

void main(){
    int i,n,p;
    printf("\nEnter the size of array : ");
    scanf("%d",&n);
    int A[n];
    printf("\nEnter the array : ");
    for(i=1;i<=n;i++)
        scanf("%d",&A[i]);
    printf("\nEnter the position of element in sorted array : ");
    scanf("%d",&k);
    p=quick_sort(A,1,n);
    printf("\nThe element is : %d",A[p]);
}

int quick_sort(int A[],int beg,int end){
    int p;
    p=partition(A,beg,end);
    if(p>k)
        quick_sort(A,beg,p-1);
    else if(p<k)
        quick_sort(A,p+1,end);
    else return p;
}

int partition(int A[],int beg,int end){
    int i,p=beg,pivot=end;
    for(i=beg;i<end;i++){
        if(A[i]<=A[pivot]){
            swap(&A[i],&A[p]);
            p++;
        }
    }
    swap(&A[pivot],&A[p]);
    return p;
}

void swap(int *a,int *b){
    int c;
    c=*b;
    *b=*a;
    *a=c;
}
