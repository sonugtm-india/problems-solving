// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void sort012(int a[], int n)
{
    int count_ones=0,count_zeros=0,count_twos=0;
    for(int i=0;i<n;i++)
    {
      if(a[i]==0)
      count_zeros++;
      else if(a[i]==1)
      count_ones++;
      else
      count_twos++;
    }
    for(int i=0;i<n;i++)
    {
        if(count_zeros>i)
        a[i]=0;
        else if(count_ones+count_zeros>i)
        a[i]=1;
        else
        a[i]=2;
    }
    
    
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends
