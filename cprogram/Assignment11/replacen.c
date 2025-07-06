#include <stdio.h>
#include <string.h>

void main() {
    char str[10];
    int n;
    int len;

    printf("Enter Character:\n");
    scanf("%s", str);  // ? No '&'

    printf("Enter index to remove: ");
    scanf("%d", &n);

    len = strlen(str);

    if (n < 0 || n >= len) {
        printf("Invalid index.\n");
        return;  
    }

    for (int i = n; i < len; i++) {
        str[i] = str[i + 1];
    }

    printf("Modified string: %s\n", str);
}
