//***DELETE THE ENTIRE LINKED LIST***

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(){
        next = NULL;
    }
};
Node* head, *tmp;

Node* delete_list(Node* head)
{
    tmp = head;
    while(tmp != NULL){
        tmp = tmp->next;
        free(head);
        head = tmp;
    }
    return head;
}


int main()
{
    head = new Node();
    head = delete_list(head);

    if(head == NULL){
        cout << "Linked list is Empty" << endl;
    }
    return 0;
}

