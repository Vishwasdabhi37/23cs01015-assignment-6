#include <stdio.h>
void func(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    float avg = sum / size;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > avg)
        {
            printf("%d ", arr[i]);
        }
    }
}
int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    func(arr, size);

    return 0;
}
