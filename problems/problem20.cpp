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
    public:
    Node* head;
    Node* tail;
    List(){
        head=tail=NULL;
    }
    void pushBack(int value){
        Node* newNode=new Node(value);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }

    }
    void appended(List &other)
    {
        if (head == NULL)
        {
            head = other.head;
            tail = other.tail;
        }
        else if (other.head != NULL)
        {   
            tail->next=other.head;
            tail=other.tail;
        }
        other.head=NULL;
        other.tail=NULL;
    }
    void printList(){
        Node* temp=head;
        while(temp !=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }

    }
};
int main(){
    List list1,list2;
    list1.pushBack(1);
    list1.pushBack(2);
    list1.pushBack(3);
    list1.pushBack(4);
    list1.pushBack(5);
    cout<<"LIST-a : ";

    list1.printList();
    cout << endl;
    list2.pushBack(6);
    list2.pushBack(7);
    list2.pushBack(8);
    list2.pushBack(9);
    list2.pushBack(10);
    cout<<"LIST-b :";
    list2.printList();
    return 0;
}