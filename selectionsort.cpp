#include<iostream>
#include<vector>

using namespace std;

void selSort(vector<int> vec){

    for(int i=0;i<vec.size()-1;i++){
            int MinIndex=i;
            int temp;

            for(int j=i+1;j<vec.size();j++){
                if(vec[j]<vec[MinIndex]){
                 MinIndex=j;
                }
            }
            swap(vec[i],vec[MinIndex]);
    }

    for(int i=0;i< vec.size();i++){
        cout<< vec[i] << " ";
    }

}

int main(){

    vector<int> vec{5,3,8,4,9,57,2347,58,348};

    selSort(vec);
    return 0;
}