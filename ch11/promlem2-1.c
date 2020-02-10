#include<stdio.h>

int main(){
    char arr[50];
    int cnt=0;
    int i=0;
    scanf("%s",arr);
    while(arr[i]!='\0'){
        cnt++;
        i++;
    }
    printf("%d",cnt);
    return 0;
    }
