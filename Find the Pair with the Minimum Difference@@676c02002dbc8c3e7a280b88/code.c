#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int smax = max;
    for(int i=0;i<n;i++){
        if(arr[i]>smax){
            smax = arr[i];
        }
    }
    printf("%d %d",smax,max);
    return 0;
}