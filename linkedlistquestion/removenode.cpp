#include<iostream>
using namespace std;

class node{
    public:
 int val;
 node*next;

   node(int val){
    this->val = val;
     this->next = NULL;
   }

};

 void display(node*head){
    node*temp = head;
    while ((temp != NULL))
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
 }
 void removenode(node* head , int n){
       node*temp = head;
       int size = 0;
       int length = 0;
       while (temp!=NULL)
       {
         length++;
         temp = temp->next;
       }

       int idx = length - n + 1;
       for(int i=1; i<length-1; i++){
        temp = temp->next;
       }
       temp->next = temp->next->next;
       size--;
 }
    


int main(){
    node*a = new node(10);
    node*b = new node(20);
    node*c = new node(30);
    node*d = new node(40);
    node*e = new node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    removenode(a,2);
    display(a);
    
}