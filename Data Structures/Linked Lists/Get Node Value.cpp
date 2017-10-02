/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
    Node *current = head;
    Node *temp = head;
    int con = 0;
    
    while(current != NULL){
        current = current->next;
        
        if(con++ > positionFromTail)
            temp = temp->next;
    }
    return temp->data;
}

