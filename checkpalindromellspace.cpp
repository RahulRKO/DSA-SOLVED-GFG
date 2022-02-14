#include<vector>


class Solution{
    private:
    bool checkpalindrome(vector<int>&arr){
    int i=0;
    int j=arr.size()-1;
    while(i<=j){
        if(arr[i]!=arr[j]){
            return 0;
        }
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
    }
    return 1;
}
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node* temp=head;
        vector<int> arr;
        int count=0;
        while(temp!=NULL){
            arr.push_back(temp->data);
            count++;
            temp=temp->next;
        }
        
        return checkpalindrome(arr);
    }
};
