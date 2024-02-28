
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> vec{1,2,0,2,1,1,0,0,2,2};
    


    for(int i=0;i<10;i++){
        cout << vec.at(i) <<" ";
    }
    cout<<endl;
    
    
    sort(vec.begin(), vec.end());
    for(int i=0;i<10;i++){
        cout << vec.at(i) <<" ";
    }


}