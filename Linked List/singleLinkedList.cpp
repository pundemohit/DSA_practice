#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node (int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp-> next = head;
    head = temp;

}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){

        cout<< temp-> data<<" ";
        temp = temp ->next;

    }
    cout<<endl;
}

void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next; 

}

void InsertAtPosition(Node* &tail,Node* &head, int position, int d ){

    //insert at start
    if(position ==1){
        InsertAtHead(head, d);
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < position -1){
        temp = temp->next;
        cnt++;
    }
    //inserting at last
    if(temp -> next = NULL){
        InsertAtTail(tail,d);
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert-> next = temp->next;
    temp->next = nodeToInsert;


}

int main(){

    // creating new node
    Node* node1 = new Node(10);
    // cout<<node1 ->data<<endl;
    // cout<<node1->next<<endl;

    Node* head = node1;
    Node* tail = node1;

    print(head);

    InsertAtTail(tail, 100);
    print(head);

    InsertAtHead(head, 12);

    print(head);
    InsertAtHead(head, 99);
    print(head);

    InsertAtPosition(tail, head, 3, 1000);
    print(head);

    cout<<"head" << head -> data << endl;
    cout<<"tail" << tail -> data <<endl;
    return 0;
}