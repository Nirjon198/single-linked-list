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
    void appended(List &other) //(class_Name &local_name_of_list2) & means the function will not copy the object.it work on original list2 object
    {
        if (head == NULL) // ব্যাখ্যা: এই লাইনটি পরীক্ষা করে যে, বর্তমান লিস্টটি (অর্থাৎ যে লিস্টের জন্য এই ফাংশনটি কল করা হয়েছে) সম্পূর্ণ খালি কি না। (head হলো বর্তমান লিস্টের প্রথম নোড)।
        {
            head=other.head;
            tail = other.tail; // head=other.head;: বর্তমান লিস্টের head এখন other লিস্টের head-কে পয়েন্ট করবে।

            /*     tail = other.tail;: বর্তমান লিস্টের tail এখন other লিস্টের tail-কে পয়েন্ট করবে।

             ফলাফল: বর্তমান খালি লিস্টটি কার্যকরভাবে other লিস্টে পরিণত হয়।*/
                
        }
        else if(other.head !=NULL){
            tail->next=other.head;
            tail=other.tail;
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