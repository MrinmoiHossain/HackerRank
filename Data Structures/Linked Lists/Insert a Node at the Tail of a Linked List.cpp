/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node* Insert(Node *head,int data)
{
    if(head == NULL){
        head = new Node();
        head->data = data;
        head->next = NULL;
    }
    else{
        Node *current_node = head;
        
        while(current_node->next != NULL){
            current_node = current_node->next;
        }
        Node *new_node = new Node();
        new_node->data = data;
        new_node->next = NULL;
        
        current_node->next = new_node;
    }
    
    return head;
}

