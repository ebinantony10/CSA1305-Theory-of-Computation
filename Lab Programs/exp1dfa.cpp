#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    printf("Enter the string: ");
    scanf("%s", str);

    len = strlen(str);

    // Check if the string starts with 'a' and ends with 'a'
    if (len > 0 && str[0] == 'a' && str[len - 1] == 'a') {
        // Check if all characters are either 'a' or 'b'
        for (i = 0; i < len; i++) {
            if (str[i] != 'a' && str[i] != 'b') {
                printf("Invalid input! Only 'a' and 'b' are allowed.\n");
                return 0;
            }
        }
        printf("String Accepted.\n");
    } else {
        printf("String Rejected.\n");
    }

    return 0;
}-
