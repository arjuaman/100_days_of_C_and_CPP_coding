#include <stdio.h>
void shellsort(int arr[], int num)
{
    int k, j, gap, tmp;
    for (gap = num / 2; gap > 0; gap = gap / 2)
    {
        for (j = gap; j < num; j++)
        {
            for(k = j - gap; k >= 0; k = k - gap)
            {
                if (arr[k+gap] >= arr[k])
                    break;
                else
                {
                    tmp = arr[k];
                    arr[k] = arr[k+gap];
                    arr[k+gap] = tmp;
                }
            }
        }
    }
}
int main()
{
    int arr[30];
    int k,  num;
    printf("Enter total no. of elements : ");
    scanf("%d", &num);
    printf("\nEnter %d numbers: ", num);

    for (k =  0 ; k < num; k++)
    {
        scanf("%d", &arr[k]);
    }
    shellsort(arr, num);
    printf("\n Sorted array is: ");
    for (k = 0; k < num; k++)
        printf("%d ", arr[k]);
    return 0;
}
