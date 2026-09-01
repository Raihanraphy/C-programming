#include <stdio.h>
const int max=100;
int main (){
    int max=200;
    const int *new_max= &max;
    printf("Printed : %d\n", max);
    printf("Printed Global: %d\n", *new_max);
    return 0;
}
