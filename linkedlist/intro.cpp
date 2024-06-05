#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;



//    use constructor 
    node(int val){
        this->val = val;
        this->next = NULL;
        
    }
};

int main(){
//    node a;
//    a.val = 10;
//    node b;
//    b.val = 10;
//    node c;
//    c.val = 10;
//    node d;
//    d.val = 10;

//    link togeather 

// a.next = &b;
// b.next = &c;
// c.next = &d;
// d.next = NULL;


node a(10);
node b(20);
node c(30);
node d(40);

a.next = &b;
b.next = &c;
c.next = &d;

// cout<<(a.next)->val<<endl;

// cout<<(((a.next)->next)->next)->val;
node temp = a;
while(1){
    cout<<temp.val<<" ";
    if(temp.next != NULL);
    temp = *(temp.next);
}

   
}