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
   int a = 0;
   for(char i = 65;i <= 70;i++){
       a++;
       for(int k=n;k >= a;k--){
           cout << " ";
       }
       for(char j = 65;j < i;j++){
           cout << j;
       }
       cout<<endl;
   }

    return 0;
}