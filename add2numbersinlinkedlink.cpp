class Solution
{
    private:
    Node* reverse(Node* head){
        Node* curr=head;
        Node* forward=NULL;
        Node* pre=NULL;
        
        while(curr!=NULL){
            forward=curr->next;
            curr->next=pre;
            pre=curr;
            curr=forward;
        }
        return pre;
    }
    void insertattail(struct Node* &head,struct Node* &tail,int val){
        Node* temp=new Node(val);
        if(head== NULL){
            head=temp;
            tail=temp;
            return;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
    }
    Node* add(struct Node* first,struct Node* second){
        int carry=0;
        Node* anshead=NULL;
        Node* anstail=NULL;
        while(first!=NULL && second!=NULL){
            int sum=carry+first->data+second->data;
            int digit=sum%10;
            //Node* temp=new Node(digit);
            insertattail(anshead,anstail,digit);
            carry=sum/10;
            first=first->next;
            second=second->next;
            
        }
        //jab ek list null hojaye tab
        while(first!=NULL){
            int sum=carry+first->data;
            int digit=sum%10;
            //Node* temp=new Node(digit);
            insertattail(anshead,anstail,digit);
            carry=sum/10;
            first=first->next;
        }
         while(second!=NULL){
            int sum=carry+second->data;
            int digit=sum%10;
            //Node* temp=new Node(digit);
            insertattail(anshead,anstail,digit);
            carry=sum/10;
            second=second->next;
        }
        while(carry!=0){
            int sum=carry;
            
            int digit=sum%10;
            insertattail(anshead,anstail,digit);
            carry=sum/10;
        }
        return anshead;
    }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        //step-1 reverse input linked lists
        first=reverse(first);
        second=reverse(second);
        
        //step-2 Add 2 linkedlist
        Node* ans=add(first,second);
        
        //step-3 reverse ans nd return;
        ans=reverse(ans);
        return ans;
    }
};
