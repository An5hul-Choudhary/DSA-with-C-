#include <iostream>
using namespace std;

class Node{

  
    public:
    int data;
    Node* next; 

    Node(){
      this->data = 0;
      this->next=nullptr;
    }

    Node(int data){
      this->data = data;
      this->next = nullptr;
    }

   

};

 void printans(Node* head){
        Node *temp= head;
        while(temp!=nullptr){
          cout<< temp->data<<" ";
          temp= temp->next;
        }
        cout<< endl;

  }

  void insertAtHead(Node* &head, int data){

    Node* newNode = new Node(data);

    newNode->next=head;
    head=newNode;


  }

  void insertAtTail(Node* &tail, int data){

     Node* newLastNode = new Node(data);

     tail->next=newLastNode;
     newLastNode->next=nullptr;
  }


void insertAtPos( Node* head,int position, int data){

  
   int i=1;
   Node* prev = head; 
   while(i<position){
     prev = prev-> next;
     i++;
   }

   Node* curr = prev->next;

   Node* newNode = new Node(data);

   newNode->next= curr;

   prev -> next = newNode;

  
  }

 

int main() {
  
  Node* first = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);
  Node* fourth = new Node(40);
  Node* fifth = new Node(50);
  

  first->next= second;
  second->next= third;
  third->next=fourth;
  fourth->next=fifth;

  printans(first);

  insertAtHead(first,100);
  printans(first);

  insertAtTail(fifth,200);
  printans(first);

  cout<< endl;

  insertAtPos(first,2,500);
  printans(first);

  return 0;
}