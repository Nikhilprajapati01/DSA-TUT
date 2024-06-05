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
void display(node *head){
    node * temp  = head;
    while (temp!=NULL)
    {
     cout<<temp->val<<" ";
     temp = temp->next;
    }
    cout<<endl;
    

}

int main(){
    node * a = new node(100);
    node * b = new node(200);
    node * c = new node(300);
    node * d = new node(400);

    a->next = b;
    b->next = c;
    c->next = d;


display(a);


// size of temp 

int n = 0;
node * temp = a;
while (temp!=NULL)
{
    temp = temp->next;
    n++;
}
cout<<n;


//  node * temp = a;
// while (temp!= NULL)
// {
//     cout<<temp->val<<" ";
//     temp = temp->next;

// }


}