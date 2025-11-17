// Write an algorithm that appends two lists together. Use linked list implementation.
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next= NULL;
    }
};
class List{
    public:
    Node* head;
    Node* tail;
    List(){
        head=NULL;
        tail=NULL;
    }
    void pushBack(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            tail=newNode;

        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void appended(List &other){
        if(head==NULL){
            head=other.head;
            tail=other.tail;
        }
        else if(other.head !=NULL){
            tail->next=other.head;
            tail=other.tail;

        }
        else{
            other.head = NULL;
            other.tail = NULL;
        }
    }
    void temporary(){
        Node* temp=head;
        
         while (temp != NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};
 
int main(){
    List li1,list2;
    li1.pushBack(1);
    li1.pushBack(2);
    li1.pushBack(3);
    cout<<"List-a : ";
    li1.temporary();
    cout<<"\nList-b : ";
    list2.pushBack(4);
    list2.pushBack(5);
    list2.pushBack(6);
    list2.temporary();
    return 0;
}