using namespace std;
#include <iostream>
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
class List{
    public:
    Node* head;
    Node* tail;
    List(){
        head=tail=nullptr;
    }
    void pushFront(int data){
        Node* newNode=new Node(data);
        if(head==NULL){
           head=tail=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
    void pushBack(int data)
    {
        Node *newNode = new Node(data);
        if (tail == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void printl(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<< " ";
            temp=temp->next;
        }
    }

};
int main(){
    List li;
    li.pushFront(1);
    li.pushFront(2);
    li.pushFront(3);
    li.pushFront(4);
    li.pushFront(5);
    li.pushFront(6);
    li.pushFront(7);
    li.pushBack(3000);
    li.printl();
}
