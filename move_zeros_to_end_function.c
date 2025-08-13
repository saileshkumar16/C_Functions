#include <stdio.h>

void moveZerosToEnd(int arr[], int n)
{
    int j = 0; // position to place the next non-zero
    
    // Step 1: Move all non-zero elements to intial positions
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
        }
    }
    
    // Step 2: Fill remaining positions with zeros
    for (int k = j; k < n; k++)
    {
        arr[k] = 0;
    }
}

int main()
{
    int arr[] = {0, 10, 20, 0, 4, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    moveZerosToEnd(arr, n);
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
