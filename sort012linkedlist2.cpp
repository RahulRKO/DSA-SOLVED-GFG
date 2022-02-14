Node* segregate(Node *head) {
        
        Node* curr=head;
        Node* dummy0= new Node(0);
        Node* zero=dummy0;
        Node* dummy1 = new Node(0);
        Node* one=dummy1;
        Node* dummy2 = new Node(0);
        Node* two=dummy2;
        while(curr!=NULL){
            if(curr->data == 0){
            Node* temp0= new Node(0);
            zero->next=temp0;
            zero=zero->next;
        }
        else if(curr->data==1){
             Node* temp1= new Node(1);
           one->next=temp1;
           one=one->next;
        }
        else{
            Node* temp2= new Node(2);
           two->next=temp2;
            two=two->next;
        }
       curr=curr->next;
        }
        Node* ans=dummy0->next;
        if(dummy1->next!=NULL)
        {zero->next=dummy1->next;
            one->next=dummy2->next;
            two->next=NULL;
        }
        else
       { 
        zero->next=dummy2->next;
        two->next=NULL;
       }
        return ans;
        
    }
