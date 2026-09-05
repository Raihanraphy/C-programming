// Online C compiler to run C program online
#include <stdio.h>
#define ARRAY_SIZE(arr) (sizeof(arr)/sizeof(arr[0]))
void printArray(int arr[], int n){
  for (int i=0; i<n; i++){
     printf("%d ", arr[i]); }
}
void bubbleSort(int arr[], int n) {
    // Outer loop: number of passes
    for (int i = 0; i < n - 1; i++) {
        // Inner loop: compare adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if elements are in wrong order
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Write C code here
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n= ARRAY_SIZE(arr);
    printf("%d \n",n);
    printf("\n Original array: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("\n Sorted Array array: ");
    printArray(arr, n);
    
    
    return 0;
}
