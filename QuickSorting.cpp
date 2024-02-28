/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int partition(int arr[], int s, int e){
    // choose pivot element
    int pivotIndex=s;
    int pivotElement=arr[s];
    
    // find Right position for pivotElement and place it there
    int count =0;
    for(int i=s+1;i<e;i++){
        if(arr[i]<=pivotElement){
            count++;
        }
    }
    
    // jab mai loop se bahar aaya to mere pass pivot ka right position ready hai
    
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;
    
    // left mai chote and right mai bade 
    int i=s;
    int j=e;
    
    while(i<pivotIndex && j> pivotIndex){
        
        while(arr[i]<=pivotElement){
            i++;
        }
        while(arr[j]> pivotElement){
            j--;
        }
        
        
        
        //A -> you find the element to swap
        
        
        //B -> no need to swap
        if(i<pivotIndex && j> pivotIndex){
            swap(arr[i], arr[j]);
        }
        
    }
            return pivotIndex;

}

void quicksort(int arr[], int s, int e){
    
    if(s>=e){
        return;
    }
    
    // partition logic
    int p=partition(arr,s,e);
    
    //recursive call
    //pivot element -> left
    quicksort(arr, s, p-1);
    
    //Right
    quicksort(arr, p+1, e);
}

int main()
{
    int arr[] ={8,1,3,4,20,50,30};
    int s=0;
    int n=7;
    int e = n-1;
    
    quicksort(arr, s,e);
    
    for(int i=0; i<n;i++){
        std::cout << arr[i] << std::endl;
    }

    return 0;
}
