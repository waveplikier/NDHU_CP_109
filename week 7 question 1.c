#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    float sum = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 3; i < n - 3; i++){
        sum +=arr[i];
    }
    sum /= n - 6;
    printf("%.2f", sum);
    return 0;
}
