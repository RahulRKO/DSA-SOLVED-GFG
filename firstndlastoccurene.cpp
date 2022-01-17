int firstocc(int arr[],int s,int e,int x){
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==x){
            ans=mid;
            e=mid-1;
        }
        if(arr[mid]<x){
            s=mid+1;
        }
        if(arr[mid]>x){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastocc(int arr[],int s,int e,int x){
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==x){
            ans=mid;
            s=mid+1;
        }
        if(arr[mid]<x){
            s=mid+1;
        }
        if(arr[mid]>x){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
vector<int> find(int arr[], int n , int x )
{
    vector<int> ind;
    ind.push_back(firstocc(arr,0,n-1,x));
    ind.push_back(lastocc(arr,0,n-1,x));
    return ind;
    
}
