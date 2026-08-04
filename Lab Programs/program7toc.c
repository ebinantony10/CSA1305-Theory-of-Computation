#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int n, i, count0 = 0, count1 = 0;
    int flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    i = 0;

    /* Count 0s */
    while (i < n && str[i] == '0')
    {
        count0++;
        i++;
    }

    /* Count 1s */
    while (i < n && str[i] == '1')
    {
        count1++;
        i++;
    }

    /* Check if all characters are processed */
    if (i != n)
        flag = 0;

    /* Number of 0s and 1s must be equal */
    if (count0 != count1)
        flag = 0;

    if (flag)
        printf("String is accepted");
    else
        printf("String is NOT accepted");

    return 0;
}

