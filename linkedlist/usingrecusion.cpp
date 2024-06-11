#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;

    node(int val){
         this->val = val;
         this->next = NULL;
    }

};

void display(node* head){
    if(head==NULL)  return;
    cout<<head->val<<" ";
    display(head->next);
}

// cout<<endl;

void reversedisplay(node* head){
    if(head==NULL)  return;
    reversedisplay(head->next);
    cout<<head->val<<" ";
}

int main(){
    node *a = new node(10);
    node *b = new node(20);
    node *c = new node(30);
    node *d = new node(40);
    node *e = new node(50);


    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    display(a);
    cout<<endl;
    reversedisplay(a);


}