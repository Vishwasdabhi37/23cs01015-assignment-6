#include <stdio.h>
void func(int arr[], int low, int high)
{
    if (low == high)
    {
        return;
    }
    int temp = arr[high];
    arr[high] = arr[low];
    arr[low] = temp;
    func(arr, low + 1, high - 1);
}
int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array at the beginning : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    func(arr, 0, size - 1);
    printf("Array at the end : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
