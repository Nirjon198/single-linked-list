#include <iostream>
using namespace std;
class Node{
    public:

    Node*next;
    int data;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};
class List{
    public:

    Node* head;
    Node* tail;
    List(){
        head=tail=NULL;
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
    void pushBack(int data){
        Node* newNode=new Node(data);
        if(tail==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void popFront(){
        if(head==NULL){
            cout<<"LIST IS EMPTY"<<endl;
            return;
        }
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    
    void popBack(){
        if(head==NULL){
            cout<<"List is empty\n";
            return;
        }
        if(head->next==NULL){
            delete head;
            head=tail=NULL;
            cout<<"data has been deleted\n";
            return;
        }

        Node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
        tail=temp;
        return ;
    }





    void printL(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }

};
int main(){
    List li;
    li.pushFront(1);
    li.pushFront(2);
    li.pushFront(3);
    li.pushFront(4);
    li.pushFront(5);
    li.pushBack(10);
    li.popFront();
    li.popBack();

 
    li.printL();
}