#include <stdio.h>

void sum_even_odd_indices(int arr[], int n, int *eve_sum, int *odd_sum)
{
    *eve_sum = 0;
    *odd_sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            *eve_sum = *eve_sum + arr[i];
        }
        else if(i % 2 != 0)
        {
            *odd_sum = *odd_sum + arr[i];
        }
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int even_sum, odd_sum;
    sum_even_odd_indices(arr, n, &even_sum, &odd_sum);
    
    printf("%d %d", even_sum, odd_sum);
    
    return 0;
}
