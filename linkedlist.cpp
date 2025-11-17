#include <iostream>
using namespace std;

class Node{ //designed a node
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next = NULL;

    }
   
};
class List{
    Node* head;
    Node* tail;
    public:
        List()
        {
            head=tail=NULL;
        }
    void push_front(int val){

        //Node newNode(val); [//will create a static object inside the memory.when our control gets out from push-front it will delete by itself.]
        
        Node *newNode = new Node(val); 
                                    // dynamic object which was created by new keyword which exist after calling the function
                                       // new Node(val): new কিওয়ার্ডটি হীপ মেমোরিতে একটি নতুন Node অবজেক্ট তৈরি করার অর্ডার দেয়।
                                       // Node *newNode: আপনি newNode নামে একটি পয়েন্টার (pointer) ভ্যারিয়েবল তৈরি করছেন (এটা স্ট্যাকে তৈরি হয়)। এই পয়েন্টারটি হীপে তৈরি হওয়া সেই নতুন Node-এর "অ্যাড্রেস" বা "ঠিকানা" ধরে রাখে।
                                       // এখন, যখন আপনার push_front ফাংশনটির কাজ শেষ হবে:

                                      // newNode পয়েন্টার ভ্যারিয়েবলটি(যেটা স্ট্যাকে ছিল) ডিলিট হয়ে যাবে।

                                     //     কিন্তু হীপে তৈরি হওয়া আসল Node অবজেক্টটি ডিলিট হবে না।

                                    //         যেহেতু আপনি এই নতুন নোডটিকে আপনার লিস্টের সাথে(যেমন head পয়েন্টারের সাথে) যুক্ত করে দিয়েছেন,
                                    //     তাই লিস্টটি সেই নোডটিকে হারাবে না।
             if (head == NULL)
        {
            head=tail=NULL;
            return ;
        }
        else{
            newNode->next = head;
        }
    }
};
int main(){

}