class Solution
{
    private:
    void insertattail(Node* &head,Node* &tail,int d){
        Node* newnode=new Node(d);
        if(head==NULL){
            head=newnode;
            tail=newnode;
            return;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    public:
    Node *copyList(Node *head)
    {
        // step 1- create a clone list
        Node* clonehead=NULL;
        Node* clonetail=NULL;
        
        Node* temp=head;
        while(temp!=NULL){
            insertattail(clonehead,clonetail,temp->data);
            temp=temp->next;
        }
        
        //step-2 mapping 
        unordered_map<Node*,Node*>oldtonew;
        
        Node* originalnode=head;
        Node* clonenode=clonehead;
        while(originalnode!=NULL && clonenode!=NULL){
            oldtonew[originalnode]=clonenode;
            originalnode=originalnode->next;
            clonenode=clonenode->next;
            
                }
        originalnode=head;
        clonenode=clonehead;
        
        while(originalnode!=NULL){
            clonenode->arb=oldtonew[originalnode->arb];
            originalnode=originalnode->next;
            clonenode=clonenode->next;
        
    }
    return clonehead;
}
};
