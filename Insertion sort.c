// Online C compiler to run C program online
#include <stdio.h>
#define ARRAY_SIZE(arr) (sizeof(arr)/sizeof(arr[0]))
void printArray(int arr[], int n){
  for (int i=0; i<n; i++){
     printf("%d ", arr[i]); }
}
void InsertionSort(int arr[], int n) {
     
    // Outer loop: number of passes
    for (int i = 1; i < n ; i++) {
        // Inner loop: compare adjacent elements
      int key = arr[i];
      int j= i-1;
      while ( j>=0 && arr[j]> key){
        arr[j+1] = arr[j];
        j--;
    }
      arr[j+1]=key;
}
}

int main() {
    // Write C code here
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n= ARRAY_SIZE(arr);
    printf("%d \n",n);
    printf("\n Original array: ");
    printArray(arr, n);

    InsertionSort(arr, n);

    printf("\n Sorted Array array: ");
    printArray(arr, n);
    
    
    return 0;
}
