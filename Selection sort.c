// Online C compiler to run C program online
#include <stdio.h>
#define ARRAY_SIZE(arr) (sizeof(arr)/sizeof(arr[0]))
void printArray(int arr[], int n){
  for (int i=0; i<n; i++){
     printf("%d ", arr[i]); }
}
void SelectionSort(int arr[], int n) {
    // Outer loop: number of passes
    for (int i = 0; i < n-1 ; i++) {
      int minIndex=i;
      for (int j=i+1;j<n;j++){
        if (arr[j]<arr[minIndex]){
          minIndex=j;}}
      //swap
      int temp= arr[i];
      arr[i]=arr[minIndex];
      arr[minIndex]=temp;
}
}

int main() {
    // Write C code here
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n= ARRAY_SIZE(arr);
    printf("%d \n",n);
    printf("\n Original array: ");
    printArray(arr, n);

    SelectionSort(arr, n);

    printf("\n Sorted Array array: ");
    printArray(arr, n);
    
    
    return 0;
}
