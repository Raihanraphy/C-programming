// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
void function(int arr[], int size){
    int  Sorted=1;

    //  Copy string
    int copy[4];
    for (int i = 0; i < 4; i++) {
        copy[i] = arr[i];
    }
    //Bubble Sorted
    for (int i = 0; i < size - 1; i++) {
      for (int j = 0; j < size - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
    //Compare Array
    for (int i = 0; i < size; i++) {
            if (arr[i] != copy[i]) {
                Sorted = 0;
                
                break;
            }
        }
    
}
    if (Sorted) {
        printf("Arrays are asc");
        
    } else {
        printf("Arrays are Desc");
    }

}
void print(int arr[], int size){
    for (int i=0; i<size; i++){
        printf("%d\n", arr[i]);
    }
    
}
int main() {
    int arr[] ={50,20,30,40};
    int size=(sizeof(arr)/sizeof(arr[0]));
    print(arr,size);
    function(arr, size);
    
}
