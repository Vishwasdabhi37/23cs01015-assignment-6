#include <stdio.h>
void func(int rows, int cols, int arr[rows][cols])
{
    float avg[rows];
    int avg_var = 0;
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
        avg[avg_var] = (float)sum / 7;
        avg_var++;
    }
    for (int i = 0; i < avg_var; i++)
    {
        printf("%.2f ", avg[i]);
    }
}
int main()
{
    int no_of_cities;
    printf("Enter the number of cities : ");
    scanf("%d", &no_of_cities);
    int temp[no_of_cities][7];
    printf("Enter the details :\n");
    for (int i = 0; i < no_of_cities; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            scanf("%d", &temp[i][j]);
        }
    }
    func(no_of_cities, 7, temp);
    return 0;
}