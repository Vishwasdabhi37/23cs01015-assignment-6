#include <stdio.h>
int main()
{
    int size1;
    printf("Enter the size of the array 1 : ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter the array : ");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    int size2;
    printf("Enter the size of the array 1 : ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter the array : ");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < size2; i++)
    {
        int check = 0;
        for (int j = 0; j < size1; j++)
        {
            if (arr2[i] == arr1[j])
            {
                check = 1;
            }
        }
        if (!check)
        {
            printf("arr2[] is not a subset of arr1[].\n");
            return 0;
        }
        printf("arr2[] is a subset of arr1[].\n");
        return 0;
    }
}
