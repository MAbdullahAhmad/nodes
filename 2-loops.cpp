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
  Node *start = new Node(1);

  Node *p = start;
  Node *c;

  for(int i=2; i<=100; i++){
    c = new Node(i);
    p->next = c;

    p = c;
  }

  // cout << start->data << '\n';
  // cout << start->next->data << '\n';
  // cout << start->next->next->data << '\n';
  // cout << start->next->next->next->data << '\n';

  c = start;
  while(c){
    cout << c->data << ' ';
    c = c->next;
  }

  return 0;
}