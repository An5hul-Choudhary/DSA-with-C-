#include <iostream>
using namespace std;

class Node{
      public:
      int data;
      Node* next;

      Node(int data){
        this->data= data;
        Node* next= NULL;
      }

};

void print(Node* &head){
    Node* temp= head;
    while(temp != NULL){
      cout<<temp->data<<" ";
      temp= temp->next;
    }
}

bool isCircularLinkedList(Node* head){
  Node* firstNode = head;
  Node* forward= head->next;
  while(forward!= firstNode){
    forward=forward->next;
    if(forward==NULL){
      return false;
    }
  }
  return true;
}

bool isAnyCircularLinkedList(Node* head){
  Node* slow = head;
  Node* fast = head;

  while(fast!=NULL && slow !=NULL){
    fast = fast -> next;
    if(fast!=NULL){
      fast=fast->next;
      slow=slow->next;
    }

    if(slow==fast){
      return true;
    }
  }
  return false;
}

int main() {
  
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh = new Node(70);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=NULL;

    // print(first);
    // cout<< endl;

    // cout<<" Linked list is circular : "<<isCircularLinkedList(first)<< endl;

    if(isAnyCircularLinkedList(first)){
      cout<< " Circular linked list is present "<< endl;
    }
    else{
      cout<< " Circular linked list is not present "<< endl;
    }




  
  return 0;
}