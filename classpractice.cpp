#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next = NULL;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
class SLL
{
public:
    Node *head = NULL, *newnode;
    void create(int d)
    {
        newnode = new Node(d);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    void insertAtbeg(int d)
    {
        newnode = new Node(d);

        newnode->next = head;

        head = newnode;
    }

    void insertAtAnyLoc(int d, int pos)
    {
        newnode = new Node(d);

        Node *temp = head, *temp1;

        for (int i = 1; i < pos; i++)
        {

            temp1 = temp;

            temp = temp->next;
        }

        temp1->next = newnode;
    }
};

void menu()
{
    cout << "Press 1 to create LIST " << endl;

    cout << "Press 2 to Add at Beginning " << endl;

    cout << "Press 3 to Add at any Position " << endl;

    cout << "Press 4 to Delete from Beginning " << endl;

    cout << "Press 5 to Delete from Last " << endl;

    cout << "Press 6 to Delete from Any Position " << endl;

    cout << "Press 7 to Search Element " << endl;

    cout << "Press 8 to Return size of list " << endl;

    cout << "Press 9 to Exit" << endl;

    cout << "Press 10 for Display" << endl;
}
int main()
{
    SLL *s1 = new SLL();

    int option, data;

    while (1)
    {
        menu();

        cout << "Enter Option " << endl;

        cin >> option;

        if (option == 1)

        {
            cout << "Enter Data" << endl;

            cin >> data;

            s1->create(data);
        }

        else if (option == 10)
        {
            s1->display();
        }

        else if (option == 2)
        {
            cin >> data;

            s1->insertAtbeg(data);
        }

        else if (option == 9)
        {
            break;
        }
    }

    /*s1->create(1);
    s1->create(2);
    s1->create(3);
    s1->display(); */

    return 0;
}