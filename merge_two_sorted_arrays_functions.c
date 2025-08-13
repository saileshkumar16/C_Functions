#include <stdio.h>

void merge_sorted_arrays(int arr1[], int n, int arr2[], int m, int arr3[]) 
{
    int i = 0, j = 0, k = 0;

    while(i < n && j < m)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    while(i < n)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while(j < m)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}

int main() 
{
    int arr1[] = {1, 3, 5, 7};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8, 10};
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[n + m];

    merge_sorted_arrays(arr1, n, arr2, m, arr3);

    for(int i = 0; i < n + m; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}
