/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>

// SUBSEQUENCE


using namespace std;

void substringseq(string s, string ans, int i){
    
    if(i>=s.length()){
        cout<< ans << endl;
        return;
    }
    
    
    // exclude
    substringseq(s,ans, i+1);
    
     // include
    ans.push_back(s[i]);
    substringseq(s,ans,i+1);
    
}


int main()
{
    string s = "abc";
    string ans="";
    int i=0;
    
    substringseq(s,ans,i);

    return 0;
}
