#include <stdio.h>

int main()
{
    int n;

    printf("input jumlah perulangan yang diinginkan: ");
    scanf("%d", &n);

    int angka[n];

    for (int i=0; i<n; i++)
    {
        printf("input angka ke-%d: ", i);
        scanf("%d", &angka[i]);
    }

    printf("\n\nData angka yang diinput : \n");
    for (int i=0; i<n; i++)
    {
        printf("%d \n", angka[i]);
    }

    return 0;

}
