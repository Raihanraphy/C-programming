// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
#include <string.h>
int main() {
    char str2[100];
    printf("Enter a string :");
    char str[100];
    scanf("%s",str);
    for(int i=strlen(str)-1, j=0; i >= 0; i--, j++){
        str2[j]=str[i];
    }
    if(strcpy(str, str2)){
        printf("Palindrome");
    }
    
    return 0;
    else{
        printf("Not palindrome");
    }
}
