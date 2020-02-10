#include<stdio.h>

int main(){
    int arr[5];
    int ans;
    int res;
    
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    ans = arr[0];
    res = 0;
    for(int i=0;i<5;i++){
        
        if(ans<=arr[i]) {
            ans = arr[i];
            res = i;
        }
    }
    printf("%d %d",ans,res);
    return 0;
    }
    
