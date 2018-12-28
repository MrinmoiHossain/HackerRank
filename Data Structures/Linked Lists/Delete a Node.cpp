#include <bits/stdc++.h>
using namespace std;

class SinglyLinkedListNode{
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data){
            this->data = node_data;
            this->next = NULL;
        }
};

class SinglyLinkedList{
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList(){
            this->head = NULL;
            this->tail = NULL;
        }

        void insert_node(int node_data){
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if(!this->head){
                this->head = node;
            }
            else{
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep) {
    while(node){
        cout << node->data;
        node = node->next;

        if(node){
            cout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node){
    while(node){
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}


SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position){
    if(head == NULL)
        return head;
    else if(position == 0)
        return head->next;
    else{
        SinglyLinkedListNode* n = head;
        for(int i = 0; i < position - 1; i++){
            n = n->next;
        }
        n->next = n->next->next;
        return head;
    }
}

int main(void)
{
    SinglyLinkedList* llist = new SinglyLinkedList();

    int llist_count;
    cin >> llist_count;

    for(int i = 0; i < llist_count; i++){
        int llist_item;
        cin >> llist_item;

        llist->insert_node(llist_item);
    }

    int position;
    cin >> position;

    SinglyLinkedListNode* llist1 = deleteNode(llist->head, position);

    print_singly_linked_list(llist1, " ");
    cout << "\n";

    free_singly_linked_list(llist1);

    return 0;
}
