#include <stdio.h>

int main() {
    int n=0;
    printf("Enter a Number: \n");
    scanf("%d", &n);

    int rev=0;
    while (n>0){
        rev = rev*10+n%10 ;
        n=n/10;
    }
    printf("%d", rev);
}
