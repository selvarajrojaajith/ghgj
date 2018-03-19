#include <stdio.h>
 
int countDigit(long n)
{
    int count = 0;
    while (n != 0) 
    {
        n = n / 10;
        ++count;
    }
}
int main(void)
{
    printf("Number of digits : %d",
           countDigit(n));
    return 0;
}
