//Multiplication table using while loop
#include<stdio.h>
int main()
{
    int i=1, n, res=1;
    scanf("%d", &n);
    while (i <= 10)
    {
        res = n * i;
        printf("%d x %d = %d\n", n, i, res);
        i++;
    }
    return 0;
}

