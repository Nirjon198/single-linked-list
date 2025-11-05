#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int new_data){
        this->data=new_data;
        this->next=nullptr;
    }

};
int main(){
    Node* head=new Node(100);
    head->next=new Node(200);
    head->next->next=new Node(300);
    head->next->next->next = new Node(400);
    head->next->next->next->next = new Node(500);
    while(head != nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}