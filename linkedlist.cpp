#include <iostream>

using namespace std;
class Node{
    public:
    int data;
    string data1;
    Node* next;
    Node(int value,string val){
        data=value;
        data1=val;
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
    void push_front(int value,string val){
        Node *newNode=new Node(value,val);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
    void pushBack(int value,string val){
        Node* newNode=new Node(value,val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next = newNode  ;
            tail=newNode;
        }
    }
    void printLL(){
        Node* temp=head;
        while(temp !=NULL){
            cout<<"["<<temp->data<<","<<temp->data1<<"], ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int
main()
{
    List li;
    li.push_front(1,"messi");
    li.push_front(2,"ronaldo");
    li.push_front(3,"yamal");
    li.push_front(4,"vini");
    li.pushBack(75,"sakiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiib");
    li.pushBack(17,"november");
    li.printLL();
    return 0;
}
