#include<iostream>
#include<queue>

using namespace std;

void negativeFirstInWindow(int arr[],int size, int k){

    queue<int> q;

    for(int i=0; i<k;i++){
        if(arr[i]<0){
            q.push(i);
        }
    }

   for(int i=k; i<size; i++) {
                //answer dedo purani wondow ka 
                if(q.empty()) {
                        cout << 0 << " ";
                }
                else {
                        cout << arr[q.front()] << " ";
                }

                //out of window elements ko remove krdo
                while((!q.empty()) && (i - q.front() >= k)) {
                        q.pop();
                }

                //check current element for insertion 
                if(arr[i] < 0 ) 
                        q.push(i);

        }

        //answer print karonfor last window
       if(q.empty()) {
                cout << 0 << " ";
        }
        else {
                cout << arr[q.front()] << " ";
        }

}

int main(){

    int arr[] = {1,-1,3,-11,13,-14,-15,-8,9};
    int size = 9;
    int k = 3;

    negativeFirstInWindow(arr, size, k);

    return 0;
}