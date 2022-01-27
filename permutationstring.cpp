class Solution
{
    private:
    
    void solve(string S, int index,vector<string>&ans){
        
        //base case jab index S string par kre
        if(index>=S.length()){
            ans.push_back(S);
            return;
        }
        
        for(int i=index;i<S.length();i++){
         
		vecto   swap(S[index],S[i]);
            solve(S,index+1,ans);
            //backtrack wapis original string banne keliye
            swap(S[index],S[i]);
        }
    }
	public:r<string>find_permutation(string S)
		{
		    vector<string> ans;
		    int index=0;
		    solve(S,index,ans);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};
