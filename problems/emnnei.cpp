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
    void popFront()
    {
        if (head == NULL)
        {
            cout << "List is empty";
            return;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void popBack(){
        if(head==NULL){
            cout<<"List is empty"<<endl;
        }
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
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
    li.popFront();
li.popBack();

    li.printL();
    
}
