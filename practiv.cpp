#include<string.h>
#include<iostream>

using namespace std;

bool isPalindrome(int x) {

        char ch= char(x);

        int s=0;
        int e= strlen(char(x));

        while(s<=e){
            if(ch[s]==ch[e]){
                return true;
                s++;
                e--;
            }
        }
return false;
    }

int main(){

int x=121;
    isPalindrome(x);
}
