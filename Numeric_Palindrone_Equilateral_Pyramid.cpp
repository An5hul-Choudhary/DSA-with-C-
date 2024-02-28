/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{

  int n;
  cin >> n;

  for (int row = 0; row < n; row++){
	  // printing spaces inverted pyramid
	  for(int col=0; col<n-row-1; col++ ){
		  cout<<" ";
	  }
	  //Printing Numbers for first half pyramid
	  for(int col1=0; col1<=row; col1++){
		  cout<< col1+1;
	  }
      for(int col3=row; col3>0; col3--){
		  cout<< col3;
	  }
	
      cout << endl;
    }

}
