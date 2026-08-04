
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, n;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    if (n >= 2 && str[0] == '0' && str[n - 1] == '1')
    {
        for (i = 0; i < n; i++)
        {
            if (str[i] != '0' && str[i] != '1')
            {
                printf("String is NOT accepted");
                return 0;
            }
        }

        printf("String is accepted");
    }
    else
    {
        printf("String is NOT accepted");
    }

    return 0;
}

