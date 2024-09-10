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

class linked{
    public:
     node* head;
     node* tail;
     int size;

         linked(){
            head = tail = NULL;
            size = 0;

         }

void add (int val){
    node* temp = head;
    while (temp->next!= head)
    {
        temp = temp->next;
    }
    node* t = new node(val);
    temp->next = t;
    t->next = head;
    

}
};

void display( node* head){
    node*temp = head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next; 
    }
    cout<<endl;
    
}


int main(){
    node* a = new node(10);
    node* b = new node(20);
    node* c = new node(30);
    node* d = new node(40);
    node* e = new node(50);

    a->next  = b;
    b->next = c;
    c->next = d;
    d->next = e;
    // e->next = a;
    


 linked ll;
    display(a);
    ll.add(60);

}