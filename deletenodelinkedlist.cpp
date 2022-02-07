Node* deleteNode(Node *head,int x)
{
    //deleting first node
    if(x==1){
        return head->next;
    }
    
    Node* curr=head->next;
    Node* prev=head;
    int count=2;
    while(curr!=NULL){
        if(count==x){
            prev->next=curr->next;
            break;
        }
        count++;
        prev=curr;
        curr=curr->next;
    }
    return head;
}
