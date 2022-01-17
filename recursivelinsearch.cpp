#include<iostream>

using namespace std;

bool linsearch(int arr[],int n,int k){
    if(n==0)
    return 0;
    if(arr[0]==k)
    return 1;
    else{
        bool ans=linsearch(arr+1,n-1,k);
        return ans;
    }
}
int main(){
    int arr[]={9,7,99,67,3,13};
    int n=6;
    int key=6;
    if(linsearch(arr,n,key)){
        cout<<"hn hu";
    }
    else
    cout<<"nhi hu meri mrzi";
    return 0;
}
