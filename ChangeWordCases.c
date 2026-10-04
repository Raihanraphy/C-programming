// Write and run C online using this editor.

#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    printf("word : ");
    fgets(str, sizeof(str), stdin);
    for(int i=0; str[i] !='\0'; i++){
        if(i==0 && isalpha((unsigned char)str[i])){
            if(islower((unsigned char)str[i])){
                str[i]=toupper((unsigned char)str[i]);
            }
            else if(isupper((unsigned char)str[i])){
                str[i]=tolower((unsigned char)str[i]);
            }
        }
       else {
           if( str[i-1] == ' ' && isalpha((unsigned char)str[i])){
               if(islower((unsigned char)str[i])){
                str[i]=toupper((unsigned char)str[i]);
            }
            else if(isupper((unsigned char)str[i])){
                str[i]=tolower((unsigned char)str[i]);
            }
           }
       }
    }
    printf("%s", str);
    return 0;
}
