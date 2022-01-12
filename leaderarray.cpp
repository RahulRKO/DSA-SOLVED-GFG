class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
         vector<int> temp;
      //inserting last element into temp;
      int curr_leader=a[n-1];
      temp.push_back(curr_leader);
      for(int i=n-2;i>=0;i--)
      {
        
          if(curr_leader<=a[i]){
              
              temp.push_back(a[i]);
              curr_leader=a[i];
          }
      }
      //reversing as we inserted from backwards;
       reverse(temp.begin(),temp.end());
       return temp;
        
    }
};
