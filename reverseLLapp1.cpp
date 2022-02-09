class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        //agar list empty ho ya fir ek element ho
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        Node* prev=NULL;
        Node* curr=head;
        Node* forward=NULL;
        
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    
};
