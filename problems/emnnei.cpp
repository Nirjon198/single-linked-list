#include <iostream>
using namespace std;
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
        head=tail=NULL;
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

    void printL()
    {
        Node *temp = head;
        while(temp!=0){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    List li;
    li.pushBack(1);
    li.pushBack(12);
    li.pushBack(123);
    li.pushBack(1234);
    li.printL();
    
}
