#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string in uppercase: ");
    gets(str); 
    strlwr(str);  
    printf("String in lowercase: %s\n", str);
    return 0;

}
 
char* strlwr(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        
        if (str[i] >= 'A' && str[i] <= 'Z') {
            
            str[i] = str[i]+32 ;
        }
    }
    return str;
}


