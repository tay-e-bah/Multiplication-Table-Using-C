//Multiplication table using do while loop
#include<stdio.h>
int main()
{
    int i=1, n, res=1;
    scanf("%d", &n);
    do
    {
        res = n * i;
        printf("%d x %d = %d\n", n, i, res);
        i++;
    } while (i<=10);
    return 0;
}

