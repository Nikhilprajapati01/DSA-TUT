#include<iostream>
using namespace std;
class node {
    public:
     int val;
     node* next;
     node* prev;
       
        node(int val){
            this->val  = val;
            this->next  = NULL;
            this->prev = NULL;
        }
};

 class dll{
    public:
    node* head;
    node* tail;
    int size;

       dll(){
          head = tail = NULL;
          size = 0;
       }

       void insertattail(int val){
          node*temp = new node(val);
           
            if(size == 0){
                    head = tail = temp;
            }
            else{
                  tail->next= temp;
                  temp->prev = tail;
                  tail = temp;
            }
            size++;
       }

           void display(){
               node * temp = head;
               while (temp!=NULL)
               {
                   cout<<temp->val<<" ";
                   temp = temp->next;
               }
               

            cout<<endl;
            }

            void insertathead(int val){
                node* temp = new node(val);
                    if(size==0) head = tail = temp;
                    else{
                        temp->next = head;
                        head->prev = temp;
                        head = temp;
                    }
                    size++;
            }

            void insertatidx(int idx ,int val){
                node* temp = head;
                node* t = new node(val);
                for(int i=0; i<2; i++){
                    temp = temp->next;
                }
                t->next = temp->next;
                temp->next = t;
                t->prev =temp;
                t->next->prev = t;

            size++;
            }
 };
int main(){
    dll ll;
    ll.insertattail(10);
    ll.insertattail(20);
    ll.insertattail(30);
    ll.insertattail(40);
    ll.display();
    ll.insertathead(50);
    ll.display();
    ll.insertatidx(2,25);
    ll.display();

}