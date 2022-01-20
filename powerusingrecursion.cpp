/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int powerof(int a,int b){
    //base cases
    if(b==0)
    return 1;
    if(b==1)
    return a;
    
    int ans= powerof(a,b/2);
    
    //b even case
    if(b%2==0){
        return ans*ans;
    }
    else{
      //odd cases of b
        return a*ans*ans;
    }
}

int main()
{
    int a,b;
    cout<<"enter number: "<<endl;
    cin>>a;
    cout<<"enter power: "<<endl;
    cin>>b;
    
    cout<<a<<" raised to power "<<b<<" is equal to "<<powerof(a,b);

    return 0;
}
