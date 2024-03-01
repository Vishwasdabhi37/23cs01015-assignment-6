#include <stdio.h>
int isprime(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int up, low;
    printf("Enter the lower limit : ");
    scanf("%d", &low);
    printf("Enter the upper limit : ");
    scanf("%d", &up);
    printf("Prime numbers between %d-%d are : ", low, up);
    for (int i = low; i <= up; i++)
    {
        if (isprime(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}
