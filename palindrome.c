#include <stdio.h>
int main(){
    printf("enter a number: ");
    int a=0;
    scanf("%d",&a);
    int rev=0;
    int org=a;
    while(a>0){
        rev=rev*10+(a%10);
        a=a/10;
    }
    if (rev == org){
        printf("palindrome");
    }
    else {
        printf("Not palindrome");
    }
}
