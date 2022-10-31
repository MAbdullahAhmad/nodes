#include<iostream>
using namespace std;

class Node{
  public:
    int data;
    Node* next;

    Node(int d){
      data = d;
    }
};

int main(){
  Node *head = new Node(11);

  Node *tmp2;
  Node *tmp;
  tmp = head;

  tmp2 = new Node(77);
  tmp->next = tmp2;
  tmp = tmp2;

  tmp2 = new Node(87);
  tmp->next = tmp2;
  tmp = tmp2;

  tmp2 = new Node(1112);
  tmp->next = tmp2;
  tmp = tmp2;


  return 0;
}