#include <stdio.h>

void move_neg_left(int arr[], int n) 
{
    int l=0;
    int r = n-1;
    
    while(l<r)
    {
        if(arr[l] < 0 && arr[r] <0)
        {
            l++;
        }
        
        else if(arr[l] > 0 && arr[r] < 0)
        {
            int tmp = arr[l];
            arr[l] = arr[r];
            arr[r] = tmp;
            l++;
            r--;
        }
        
        else if (arr[l] > 0 && arr[r]>0)
        {
            r--;
        }
        
        else
        {
            l++;
            r--;
        }
    }
}

int main() 
{
    int arr[] = {-1,-8,4,-3,6,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    move_neg_left(arr, n);

    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
