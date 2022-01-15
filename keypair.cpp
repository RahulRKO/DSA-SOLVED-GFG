class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    sort(arr,arr+n);
	    int s=0;
	    int e=n-1;
	    while(s<e){
	        if(arr[s]+arr[e]>x){
	            e--;
	        }
	        else if(arr[s]+arr[e]<x){
	            s++;
	        }
	        else{
	            return true;
	        }
	    }
	    return false;
	}
};
