// Delete the last node of the linked list


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

Node* head, *tmp, *tmp2;

Node* del_last(Node* head)
{
    if(head == NULL){
        cout << "Linked list is empty" << endl;
    }
    else if(head->next == NULL){
        free(head);
        head = NULL;
    }
    else{
        tmp = head;
        tmp2 = head;
        while(tmp->next != NULL){
            tmp2 = tmp;
            tmp = tmp->next;
        }
        tmp2->next = NULL;
        free(tmp);
        tmp = NULL; 
    }
    return head;
}
int main()
{
    head = new Node();
    head = del_last(head);
    //after deleting the last node, print the whole linked list 
    return 0;
}

