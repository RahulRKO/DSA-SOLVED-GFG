//brute force
/*void rotate(int arr[],int n, int k){
  k=k%n;
  while(k--){
    int temp=arr[0];
    for(int i=0;i<n;i++){
      arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
  }*/  //0(n2) complexity

optimised
void rotate(vector<int>&v,int k){
int n=v.size();
k=k%n;
reverse(v.begin(),v.begin()+k);
reverse(v.begin()+k,v.end());
reverse(v.begin(),v.end());
}
