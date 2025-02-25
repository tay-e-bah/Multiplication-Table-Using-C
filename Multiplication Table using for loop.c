//Multiplication table using for loop
#include<stdio.h>
int main()
{
    int i, n, res=1;
    scanf("%d", &n);
    for (i = 1 ; i <= 10 ; i++)
    {
        res = n * i;
        printf("%d x %d = %d\n", n, i, res);
    }
    return 0;
}
