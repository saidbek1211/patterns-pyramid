/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
  
   int n = 5;
   for(int i = 1;i <= n;i++){
       for(int k=n;k > i;k--){
           cout << " ";
       }
       for(int j = 1;j <=i;j++){
           cout << j;
       }
       cout<<endl;
   }

    return 0;
}