class Solution{
    public:
    int removeConsecutiveSame(vector <string > v) 
    {
        // creating a empty string:
       vector <string> ans;
        for(int i=0;i<v.size();i++){
          //if string empty just simply take element of v string.
            if(ans.size()==0){
                ans.push_back(v[i]);
            }
          //if consecutive element not same simply push_back.
            else if(v[i]!=ans.back()){
                ans.push_back(v[i]);
            }
          //if 2 same elements simply pop_back 
            else{
                ans.pop_back();
            }
        }
        int size=ans.size();
        return size;
    } 
};
