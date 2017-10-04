#include<stdio.h>
#define N 100
#define ISALPHA(c) (c>='a' && c<='z')

void main(){
    int i=0,count=0;
    char ch[N];
    printf("\nEnter a alphanumeric string : ");
    gets(ch);
    while(ch[i]){
        if(!ISALPHA(ch[i])){
            count=count + (ch[i]-'0');
        }
        i++;
    }
    printf("\nSum of numbers in the given string is : %d",count);
}
