// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
    int a,b,i,j;
    
    printf("Enter two numbers: \n");
    scanf("%d %d", &a,&b);
    for (i=a; i<=b; i++){
        int prime=1;
        if(i<2){
            prime=0;
        }
        for (j=2;j*j<i; j++){
            if (i%j==0){
                prime=0;
            }
        }
        if(prime){
            printf("%d \n", i);
        }
    }
}
