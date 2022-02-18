Node* merge(Node* a,Node* b)
{
   Node* temp = new Node(0);
   Node* res = temp;
   
   
   while(a != NULL && b != NULL)
   {
     if(a->data <= b->data)
       {
          temp->bottom = a;
          a = a->bottom;
          temp = temp->bottom;
       }
       else
       {
           temp->bottom = b;
           b = b->bottom;
           temp = temp->bottom;
       }
   }
   
   while(a != NULL)
   {
       temp->bottom = a;
       a = a->bottom;
       temp = temp->bottom;
   }
   
   while(b != NULL)
   {
       temp->bottom = b;
       b = b->bottom;
       temp = temp->bottom;
   }
   
   res->bottom->next = NULL;
   
   return res->bottom; 
}
Node *flatten(Node *root)
{
  if(root == NULL || root->next == NULL)
  return root;
  
  Node* ans = flatten(root->next);
  
  return merge(ans ,root);
}
