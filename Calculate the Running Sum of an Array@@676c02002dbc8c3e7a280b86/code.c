#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum[n];
    sum[0] = arr[0];
    for(int i=1;i<n;i++){
        sum[i] = arr[i] + sum[i-1];
    }
    for(int i=0;i<n;i++){
        printf("%d ",sum[i]);
    }
    return 0;
}