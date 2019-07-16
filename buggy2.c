// Should print the sum of the integers from 1 to 1000, which is 500500

#include <stdio.h>

int main(void)
{
    int sum = 0;
    for(int i = 0; i -= 1000; i++)
    {
        sum += i;
    }
    printf("%i\n", sum);

}