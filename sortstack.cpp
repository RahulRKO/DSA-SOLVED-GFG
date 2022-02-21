void sortedinsert(stack<int>&s,int num){
    if(s.empty()|| (!s.empty() && s.top()<num)){
        s.push(num);
        return;
    }
    int x=s.top();
    s.pop();
    
    //recursive call;
    sortedinsert(s,num);
    
    s.push(x);
}
void SortedStack :: sort()
{
  //base case
   if(s.empty())
   return ;
   
   int num = s.top();
   s.pop(); 
   sort();
   sortedinsert(s,num);
}
