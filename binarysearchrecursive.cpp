#include <iostream>

using namespace std;

bool binsearch(int arr[],int s,int e,int k){
    if(s>e){
        return 0;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==k){
        return 1;
    }
    if(arr[mid]>k){
       return binsearch(arr,s,mid-1,k);
    }
    else{
       return binsearch(arr,mid+1,e,k);
    }
}

int main()
{
    int arr[]={5,9,11,14,19,26};
    int n=6;
    int k=19;
    
    if(binsearch(arr,0,n-1,k)==1){
        cout<<"present";
    }
    else{
        cout<<"absent";
    }

    return 0;
}
