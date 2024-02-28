#include <iostream>
using namespace std;

// Merge two sorted subarrays into a single sorted subarray
void merge(int arr[], int temp[], int left, int mid, int right) {
    int i = left;        // Pointer for the left subarray
    int j = mid + 1;     // Pointer for the right subarray
    int k = left;        // Pointer for the merged subarray
    int inversions = 0;  // Count of inversions
    
    // Merge the subarrays by comparing elements and placing them in the correct order
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inversions += (mid - i + 1);  // Increment inversion count
        }
    }
    
    // Copy the remaining elements from the left subarray, if any
    while (i <= mid) {
        temp[k++] = arr[i++];
    }
    
    // Copy the remaining elements from the right subarray, if any
    while (j <= right) {
        temp[k++] = arr[j++];
    }
    
    // Copy the sorted elements from the temporary array to the original array
    for (int p = left; p <= right; p++) {
        arr[p] = temp[p];
    }
    
    // Print the inversion count (optional)
    cout << "Inversions: " << inversions << endl;
}

// Merge sort function
void mergeSort(int arr[], int temp[], int left, int right) {
    if (left >= right) {
        // Base case: array with 0 or 1 element is already sorted
        return;
    }
    
    int mid = left + (right - left) / 2;  // Calculate the middle index
    
    // Recursively divide and sort the left and right subarrays
    mergeSort(arr, temp, left, mid);
    mergeSort(arr, temp, mid + 1, right);
    
    // Merge the sorted subarrays
    merge(arr, temp, left, mid, right);
}

// Driver code
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int temp[n];  // Temporary array for merging
    
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Call merge sort function
    mergeSort(arr, temp, 0, n - 1);
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
