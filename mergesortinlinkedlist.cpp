class Solution{
    private:
    Node* getmid(Node* head){
        Node* slow=head;
        Node* fast=head->next;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        return slow;
    }
    Node* merge(Node* left, Node* right){
        if(left==NULL){
            return right;
        }
        if(right==NULL){
            return left;
        }
        
        //dummy node
        Node* ans=new Node(-1);
        Node* temp=ans;
        //merge 2 sorted linked list
        while(left!=NULL && right!=NULL){
            if(left->data<right->data){
                temp->next=left;
                temp=left;
                left=left->next;
            }
            else{
                temp->next=right;
                temp=right;
                right=right->next;
            }
        }
        while(left!=NULL){
            temp->next=left;
                temp=left;
                left=left->next;
        }
        while(right!=NULL){
            temp->next=right;
                temp=right;
                right=right->next;
        }
        ans=ans->next;
        return ans;
    }
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // base case
        if(head==NULL || head->next==NULL){
            return head;
        }
        //dividing LL into two halves by finding mid
        Node* mid=getmid(head);
        
        Node* left=head;
        Node* right=mid->next;
        mid->next=NULL;
        
        //recursive calls to sort both halves
        left=mergeSort(left);
        right=mergeSort(right);
        
        //merge both right nd left parts
        
        Node* result=merge(left,right);
        
        return result;
        
    }
};
