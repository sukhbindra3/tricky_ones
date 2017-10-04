#include<stdio.h>
#include<string.h>
#define N 100

void find_initials(char *);

void main(){
    char c[N];
    printf("\nEnter an string : ");
    gets(c);
    find_initials(c);
}

void find_initials(char *c){
    int i=0,n;
    printf("\nInitials are : %c",c[i]);
    while(c[i]){
        if(c[i]==' '){
            printf("  %c",c[i+1]);
        }
        i++;
    }
}
