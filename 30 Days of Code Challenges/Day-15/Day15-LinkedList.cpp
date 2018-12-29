#include <iostream>
#include <cstddef>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:
        Node* insert(Node *head,int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                return newNode;
            }
            else{
                Node* curr = head;
                while(curr->next != NULL)
                    curr = curr->next;
                curr->next = newNode;
            }
            return head;
        }

        void display(Node *head){
            Node *start=head;
            while(start){
                cout<<start->data<<" ";
                start=start->next;
            }
        }
};

int main(void)
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }
	mylist.display(head);

}
