#include<stdio.h>

int main(){
    char arr[50];
    int i=0;
    int cnt=0;
    char c;
    scanf("%s",arr);
    while(arr[i]!='\0'){
        i++;
        cnt++;
    }
    c = arr[i]; 
    for(int i=0;i<cnt;i++)
    {
        if(c<=arr[i]){
            c=arr[i];
        }
    }
    printf("%d\n",c);
    return 0;
}
   
