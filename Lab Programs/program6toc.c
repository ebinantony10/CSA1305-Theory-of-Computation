#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int n, i, j, k, count0 = 0, count1 = 0;
    int flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    /* Count leading 0s */
    i = 0;
    while (i < n && str[i] == '0')
    {
        count0++;
        i++;
    }

    /* Count 1s */
    j = i;
    while (j < n && str[j] == '1')
    {
        count1++;
        j++;
    }

    /* Check remaining 0s */
    k = j;
    while (k < n && str[k] == '0')
    {
        k++;
    }

    if (k != n)
        flag = 0;

    /* Number of 0s on both sides must be equal */
    if (flag)
    {
        int right0 = n - j;

        if (count0 != right0)
            flag = 0;
    }

    if (flag)
        printf("String is accepted");
    else
        printf("String is NOT accepted");

    return 0;
}
