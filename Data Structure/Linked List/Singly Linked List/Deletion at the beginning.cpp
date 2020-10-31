// Delete the first node of the linked list


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

Node* head,*tmp;

Node* del_first(Node* head)
{
    if(head == NULL){
        cout << "Linked list is empty" << endl;
    }
    else{
        tmp = head;
        head = head->next;
        free(tmp);
        tmp = NULL; 
    }
    return head;
}
int main()
{
    head = new Node();
    head = del_first(head);
    //after delete the first node, print the whole linked list 
    return 0;
}
