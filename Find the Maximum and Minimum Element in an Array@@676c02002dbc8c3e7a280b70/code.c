#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int great = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>great){
            great = arr[i];
        }
    }
    int small = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<small){
            small = arr[i];
        }
    }
    printf("%d %d",small,great);
    return 0;
}