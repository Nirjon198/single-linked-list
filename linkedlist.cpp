#include <iostream>

using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }

};
class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head=tail=NULL;
    }
    void push_front(int value){
        Node *newNode=new Node(value);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
    void printLL(){
        Node* temp=head;
        while(temp !=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int
main()
{
    List li;
    li.push_front(1);
    li.push_front(2);
    li.push_front(3);
    li.push_front(4);
    li.printLL();
    return 0;
}
