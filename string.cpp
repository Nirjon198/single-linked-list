#include <iostream>
using namespace std;
class Node{
    public:
    string data;
    Node* next;
    Node(string value){
        data=value;
        next=NULL;
    }
};
class List{
    Node* head;
    Node* tail;
   public:
    List(){
        head=NULL;
        tail=NULL;
    }
    void push_front(string value){
        Node* newNode=new Node(value);
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
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    List li;
    li.push_front("NIRJON");
    li.push_front("SUJON");
    li.push_front("MAHIM");
    li.push_front("SHARIF");
    
    li.printLL();

}