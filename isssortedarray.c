bool arraySortedOrNot(int arr[], int n) {

    //agar ek hi element hai ya koi bhi nhi hai already sorted hua na
    if(n==1 || n==0)
    return true;
    
    //check sorted or not if not then this:
    if(arr[0]>arr[1])
    return false;
    
    else{
        //recursive call
        bool ans=arraySortedOrNot(arr+1, n-1);
         return ans;
    }
   
    
    
}
