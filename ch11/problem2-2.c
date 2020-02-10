#include<stdio.h>

int main(){
    char arr[50];
    int cnt=0;
    int i=0;
    scanf("%s",arr);
    while(arr[i]!='\0'){
        i++;
        cnt++;
    }
    for(int i=cnt;i>0;i--){
        printf("%c",arr[i-1]);
    }
    return 0;
    }
    
