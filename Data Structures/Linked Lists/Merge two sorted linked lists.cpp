#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = NULL;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList(){
            this->head = NULL;
            this->tail = NULL;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep){
    while(node){
        cout << node->data;
        node = node->next;

        if(node){
            cout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2){
    if(head1 == NULL && head2 == NULL)
        return NULL;
    else if(head1 == NULL)
        return head2;
    else if(head2 == NULL)
        return head1;

    if(head1->data <= head2->data)
        head1->next = mergeLists(head1->next, head2);
    else{
        SinglyLinkedListNode* temp = head1;
        head1 = head2;
        head2 = temp;

        head1->next = mergeLists(head1->next, head2);
    }

    return head1;
}

int main()
{
    int tests;
    cin >> tests;

    for (int tests_itr = 0; tests_itr < tests; tests_itr++) {
        SinglyLinkedList* llist1 = new SinglyLinkedList();

        int llist1_count;
        cin >> llist1_count;

        for (int i = 0; i < llist1_count; i++) {
            int llist1_item;
            cin >> llist1_item;

            llist1->insert_node(llist1_item);
        }

      	SinglyLinkedList* llist2 = new SinglyLinkedList();

        int llist2_count;
        cin >> llist2_count;

        for (int i = 0; i < llist2_count; i++) {
            int llist2_item;
            cin >> llist2_item;

            llist2->insert_node(llist2_item);
        }

        SinglyLinkedListNode* llist3 = mergeLists(llist1->head, llist2->head);

        print_singly_linked_list(llist3, " ");
        cout << "\n";

        free_singly_linked_list(llist3);
    }

    return 0;
}
