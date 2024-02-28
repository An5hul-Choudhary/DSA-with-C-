#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* prev;
    

    Node(int data){
      this->data= data;
      this->next=NULL;
      this->prev=NULL;
      
    }

};

void print(Node* &head){

  Node* temp= head;

  while(temp != NULL){

    cout<< temp->data << " ";
    temp=temp->next;
  }
}

Node* reverseLinkedList(Node* &head){

    Node* prev = NULL;
    Node* curr= head;
   

    while(curr != NULL){

      Node* forward = curr->next;
      curr->next= prev;
      prev= curr;
      curr = forward;
    }

  return prev;

}

Node* reverseUsingRecursion(Node* prev, Node* curr){

      // Base case
      if(curr==NULL){
        return prev;
      }

      // Implementation
      Node* forward = curr -> next;
      curr->next=prev;
      prev=curr;
      curr=forward;

      // Recursion
     return reverseUsingRecursion(prev, curr);
}

Node* middleNode(Node* head){

  if(head==NULL){
    cout<<"Linked list is empty";
    return head;
  }
  if(head->next==NULL){
    return head;
  }
  

  Node* slow = head;
  Node* fast = head;

  while(slow != NULL && fast != NULL){
    fast=fast->next;
    if(fast!=NULL){
    slow= slow->next;
    fast= fast->next;
    }
  }

  return slow;
}

int main() {
  
  Node* head = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);
  Node* fourth = new Node(40);
  Node* fifth = new Node(50);
  Node* sixth = new Node(60);
  Node* tail = new Node(70);

  

  head->next=second;
  second->next=third;
  third->next=fourth;
  fourth->next=fifth;
  fifth->next=sixth;
  // sixth->next=tail;

  // cout<< "Printing Linked list"<< endl;
  // print(head);
  // cout<< endl;


  // cout<< "Reverse printing using loop"<< endl;
  // Node* out = reverseLinkedList(head);
  // print(out);
  // cout<< endl;

  // Node* prev=NULL;
  // Node* curr = head;

  // cout<< "Reverse printing using Recursion"<< endl;
  // Node* reversehead = reverseUsingRecursion(prev, curr);
  // print(reversehead);
  // cout<< endl;



  Node* Middle = middleNode(head);
  cout<<"Middle Node is:"<<endl;
  cout<< Middle->data;
  cout<< endl;




  return 0;
}