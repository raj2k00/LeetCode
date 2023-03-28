//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    // int binarySearch(int a[], int low, int high, int key){

    //     if(high < low){
    //         return -1;
    //     }
        
    //     int mid = (low + high)  / 2;

    //     if(a[mid] == key){
    //         return mid;

    //     }
    //     if(key > a[mid]){
    //         return binarySearch(a, mid + 1, high, key);
    //     }else{
    //         return binarySearch(a, low, mid - 1, key);
    //     }
 
    //     return -1;
            
    // }
    
    // int pivotPoint(int a[], int low, int high){
            
    //         if(low > high){
    //             return -1;
    //         }
    //         if(low == high){
    //             return low;
    //         }
    //         int mid = low + ( high - low) /2;

            
    //         if(mid < high && a[mid] > a[mid + 1]){
    //             return mid;
    //         }
            
    //         if(low > mid && a[mid] < a[mid - 1]){
    //             return mid - 1;
    //         }
            
    //         if(a[low] >= a[mid]){
    //           return pivotPoint(a, low, mid - 1 );
    //         }
    //         return pivotPoint(a, mid + 1, high);
    // }
    int binarySearch(int arr[], int low, int high, int key)
{
	if (high < low)
		return -1;

	int mid = (low + high) / 2;
	if (key == arr[mid])
		return mid;

	if (key > arr[mid])
		return binarySearch(arr, (mid + 1), high, key);

	return binarySearch(arr, low, (mid - 1), key);
}

// Function to get pivot. For array 3, 4, 5, 6, 1, 2
// it returns 3 (index of 6)
int findPivot(int arr[], int low, int high)
{
	// Base cases
	if (high < low)
		return -1;
	if (high == low)
		return low;

	// low + (high - low)/2;
	int mid = (low + high) / 2;
	if (mid < high && arr[mid] > arr[mid + 1])
		return mid;

	if (mid > low && arr[mid] < arr[mid - 1])
		return (mid - 1);

	if (arr[low] >= arr[mid])
		return findPivot(arr, low, mid - 1);

	return findPivot(arr, mid + 1, high);
}

// Searches an element key in a pivoted
// sorted array arr[] of size n
int pivotedBinarySearch(int arr[], int n, int key)
{
	int pivot = findPivot(arr, 0, n - 1);

	// If we didn't find a pivot,
	// then array is not rotated at all
	if (pivot == -1)
		return binarySearch(arr, 0, n - 1, key);

	// If we found a pivot, then first compare with pivot
	// and then search in two subarrays around pivot
	if (arr[pivot] == key)
		return pivot;

	if (arr[0] <= key)
		return binarySearch(arr, 0, pivot - 1, key);

	return binarySearch(arr, pivot + 1, n - 1, key);
}

    
    int search(int A[], int l, int h, int key){
        pivotedBinarySearch(A, h+1, key);
        
        // int pivot =  pivotPoint(A, 0, h);

        // if(pivot == -1){
        //     return binarySearch(A,0,h,key);
        // }
        
        // if(pivot == key){
        //     return pivot;
        // }
        
        // if(A[0] <= key){
        //   return binarySearch(A,0,pivot-1 ,key);
        // }
        // return binarySearch(A, pivot+1, h,key);
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends