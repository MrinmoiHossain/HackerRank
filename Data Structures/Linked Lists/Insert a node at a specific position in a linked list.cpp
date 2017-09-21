/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node* InsertNth(Node *head, int data, int position)
{
    Node *new_node = new Node();
    new_node->data = data;
    
    if(head == NULL){
        new_node->next = NULL;
        return new_node;
    }
    
    if(position == 0){
        new_node->next = head;
        return new_node;
    }
    
    Node *current_node = head;
    while(position > 1){
        current_node = current_node->next;
        position--;
    }
    
    new_node->next = current_node->next;
    current_node->next = new_node;
    
    return head;
}

