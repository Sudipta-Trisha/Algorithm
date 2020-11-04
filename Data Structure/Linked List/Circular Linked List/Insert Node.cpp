// Insertion,deletion operation in Circular Linked List

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

Node* head, *temp;

void insert(int data)
{
    Node* newnode = new Node();
    newnode->data = data;
    if(head == NULL)
        head = temp = newnode;
    else{
        temp->next = newnode;
        temp = newnode;
    }
}

void add_node(Node* head)
{
    int test;
    cout << "Enter node number: ";
    cin >> test;

    cout << "Enter numbers : ";
    while(test--){
        int data;
        cin >> data;
        insert(data);
    }
    temp->next = head;
}

Node* del_first(Node* head)
{
    Node* curr = head;      // it is pointing the first node 
    Node* prev = head;

    if(curr->next == NULL){
        cout << "***List is empty***" << endl;
    }
    else if(curr->next == curr){
        curr = NULL,head = NULL;
        free(curr);
        cout << "***First node deleted successfully!***" <<"\n" << endl;
    }
    
    else{
        while(prev->next != head){
            prev = prev->next;
        }
        prev->next = curr->next;
        head = prev->next;
        free(curr);
        cout << "***First node deleted successfully!***" << "\n" << endl;
    }
    return head;
}

Node* del_last(Node* head)
{
    Node* curr = head;   
    Node* prev = head;

    if(curr->next == NULL){
        cout << "***List is empty***" << endl;    //if list contains no node
    }
    else if(curr->next == curr){
        curr = NULL,head = NULL;
        free(curr);
        cout << "***Last node deleted successfully!***" <<"\n" << endl;       // if list contains only one node
    }
    else{
        while(curr->next != head){
            prev =  curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        head = prev->next;
        free(curr);
        cout << "***Last node deleted successfully!***" << "\n" << endl;
    }
    return head;
}

int Length(Node* head) 
{ 
    Node* current = head; 
    int cnt = 0; 
  
    // if list is empty simply return length zero 
    if (head == NULL) { 
        return 0; 
    } 
  
    // traverse forst to last node 
    else { 
        do { 
            current = current->next; 
            cnt++; 
        } while (current != head); 
    } 
    return cnt; 
}

Node* del_pos(Node* head, int pos)    //delete node at given position
{
    int len = Length(head),cnt=0;
    Node* prev, *curr = head;
    
    if(curr->next == NULL)
        cout << "***List is empty***" << "\n" << endl;
    else if(len < pos || pos < 0){
        cout << "***Position is not found***" << "\n" << endl;
    }
    else if(pos == 0){
        head = del_first(head);
    }
    else{
        while(cnt != pos){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        free(curr);
        cout << "***Node deleted successfully!***" << "\n" << endl;
    }
    return head;
} 

void print_list(Node* head)
{
    if(head->next == NULL)
        cout << "List is empty" << endl;
    else{
        cout << "Circular Linked List: ";
        temp = head;
        while(temp->next != head){
            temp = temp->next;
            cout << temp->data << " ";
        }
        cout << endl;
    }
}

int main()
{
    head = new Node();
    temp = head;

    cout << "Which operation do you want to do? " << endl;
    cout << "1. Add node" << "\n" << "2. Print List" << "\n" << "3. Delete a Node" << "\n" << "0. Exit" << "\n" << endl;

    while(1){
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        if(choice == 1){
            add_node(head);
            cout << "Node added successfully!" << "\n" << endl;
        }

        else if(choice == 2){
             print_list(head);
        }

        else if( choice == 3 ){
            int op;
            cout << "1. Delete first node" << "\n" << "2. Delete Last Node" << "\n" << "3. Delete a node at a particular position" << "\n" << endl;
            cout << "Choose your operation: ";
            cin >> op;
            cout << endl;

            if(op == 1){
                head = del_first(head);    
            }
            else if(op == 2){
                head =  del_last(head);
            }
            else{
                int pos;
                cout << "Enter position: ";
                cin >> pos;
                head = del_pos(head,pos);
            }
        }

        else {
            break;
        }
    }

    return 0;
}
