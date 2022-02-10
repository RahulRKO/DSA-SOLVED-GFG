class Solution
{
    public:
   Node* detectLoopNode(Node*head)
   {
       Node*slow=head,*fast = head;
       while(fast != NULL && fast -> next != NULL)
       {
           slow = slow -> next;
           fast = fast -> next -> next;
           if(slow == fast)
           {
               while(head != fast)
               {
                   head = head -> next;
                   fast = fast -> next;
               }
               return fast;                // first looping Node;
           }
       }
       return NULL;
   }
   
    void removeLoop(Node* head)
   {
      Node*loopNode = detectLoopNode(head);
      if(loopNode == NULL)       // There is no loop
      return;
      Node*temp = loopNode->next;
       while(temp -> next != loopNode)
      {
          temp = temp -> next;              
      }                         
       temp -> next = NULL; // just one step to reach node for to break loop we have to puts null into temp -> next.
       return;
   }
