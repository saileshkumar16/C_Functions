#include <stdio.h>

void find_union(int arr1[], int n1, int arr2[], int n2)
{
    int union_arr[n1 + n2]; // max possible size
    int k = 0; // index for union array

    // Step 1: Iterate arr1 and compare arr1 itself add unique elements to union array
    for(int i = 0; i < n1; i++)
    {
        int found = 0;
        for(int j = i+1; j < n1; j++)
        {
            if(arr1[i] == arr1[j])
            {
                found = 1;
                break;
            }
        }
        if(found == 0)
        {
            union_arr[k++] = arr1[i];
        }
    }

    // Step 2: Iterate arr2 and compare with union array add unique elements to union array
    for(int i = 0; i < n2; i++)
    {
        int found = 0;
        for(int j = 0; j < k; j++)
        {
            if(union_arr[j] == arr2[i])
            {
                found = 1;
                break;
            }
        }
        if(found == 0)
        {
            union_arr[k++] = arr2[i];
        }
    }

    
    printf("Union of the two arrays: ");
    for(int i = 0; i < k; i++)
    {
        printf("%d ", union_arr[i]);
    }
}

int main() 
{
    int arr1[] = {1, 2, 2, 3};
    int arr2[] = {2, 3, 3, 4};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    find_union(arr1, n1, arr2, n2);

    return 0;
}
