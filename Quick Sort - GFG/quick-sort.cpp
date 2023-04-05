//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low < high){
            int pivot = partition(arr,low,high);
            // Lomuto Partition
            // quickSort(arr,low,pivot-1);
            // Hoare's Partition
            quickSort(arr,low,pivot);
            quickSort(arr,pivot+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
    //   Lomuto Partition
    //   int i = low - 1;
    //   int p = arr[high];
       
    //   for(int j = low; j <= high; j++){
    //       if(arr[j] < p){
    //           i++;
    //           swap(arr[i], arr[j]);
    //       }
    //   }
    //   swap(arr[i+1], arr[high]);
       
    //   return i+1;
    
    // Hoare's Partition
    
        int i = low - 1;
        int j = high + 1;
        int p = arr[low];
        
        while (true){
            

        do{
            i++;
        }while(arr[i] < p);
        
        do{
            j--;
        }while(arr[j] > p);
        
        if(i >= j){
            return j;
        }
        
        swap(arr[i], arr[j]);
        }
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends