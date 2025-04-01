#include <stdio.h>
int main(){
    int n,b;
    scanf("%d",&n);
    int arr[n], arr2[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(int i = 0; i<n; i++){
        arr2[i] = arr[i];
    }
    for (int j=0;j<n-1;j++){
        for (int k=j+1;k<n;k++){
            if (arr[j]>arr[k]){
            int temp =arr[j];
            arr[j]=arr[k];
            arr[k]=temp;
            }
        }
    }
for(int l=0;l<n;l++){
    if(arr2[l] != arr[l]){
        printf("Not Sorted");
        return 0;
    }
    }
    printf("Sorted");
    return 0;
}