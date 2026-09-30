// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
#include <math.h>
int main() {
    printf("enter a numnber : ");
    int a=0, prime=1;
    scanf("%d", &a);
    if (a<2){
        prime=0;
    }
    else {
        for (int i = 2; i <= sqrt(a); i++) {
            if (a% i == 0) {
                prime = 0;
                break;
            }
        }
    }
    if (prime)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
