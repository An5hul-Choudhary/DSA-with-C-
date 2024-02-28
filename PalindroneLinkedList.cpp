#include <iostream>
#include <vector>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *middleNode(Node *&head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && slow != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}

Node* reverseFromMiddle(Node *&head)
{
    Node *curr = head;
    Node *forw = curr->next;
    Node *prev = NULL;
    while (curr != NULL)
    {
        forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
    }

    return prev;
}    

bool isPalindroneLinkedList(Node *&head)
{

    if (head == NULL)
    {
        cout << " Linked list is empty " << endl;
        return false;
    }
    if (head->next == NULL)
    {
        return true;
    }
   

    Node *reverseList = reverseFromMiddle( middleNode(head)->next);

     middleNode(head)->next = reverseList;

    Node *temp1 = head;
    Node *temp2 = reverseList;

    while (temp2 != NULL)
    {
       

        if (temp1 ->data != temp2 -> data)
        {
            return false;
        }
        else{
             temp1 = temp1->next;
             temp2 = temp2->next;
        }
    }
    return true;
}

int main()
{

    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);
    Node* sixth = new Node(1);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next= sixth;


    cout<< "Input linked list is"<< endl;
    print(first);
    cout<< endl;


    Node* MidNode = middleNode( first);
    cout<< "Middle Node of linked list is"<< endl;
    cout<< MidNode->data<< endl;
    cout<< endl;


    cout<< "Reverse from middle linked list is"<< endl;
    MidNode->next =reverseFromMiddle(MidNode->next);
    print(first);
    cout<< endl;


    if(isPalindroneLinkedList(first)){
        cout<< " Linked list is Palindrone"<< endl;
    }
    else{
        cout<< "Linked list is not palindorme"<< endl;
    }

    return 0;
}