#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int counted[n];
    for(int i=0;i<=n;i++){
        scanf("%d ",&arr[i]);
        counted[i] = 0;
    }
    for(int i=0;i<=n;i++){
        if(counted[i]){
            continue;
        }
        int f = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                f++;
                counted[j] = 1;
            }
        }
        printf("%d %d\n",arr[i],f);
    }
    return 0;
}