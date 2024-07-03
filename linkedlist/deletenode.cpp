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

class linkedlist{
    public:
    node*head;
    node*tail;
    int size;


       linkedlist(){
        head = tail = NULL;
        size = 0;
       }

       void insertatend(int val){
          node*temp = new node(val);
          if(size == 0){
            head = tail = temp;
          }else{
                tail->next = temp;
                tail = temp;
          }
          size ++;
       }

       void display(){
          node*temp = head;
          while (temp!=NULL)
          {
            cout<<temp->val<<" ";
            temp = temp->next; 
          }
          cout<<endl;
          
       }

       void insetatbigning(int val){
            node*temp = new node(val);
            if(size == 0) head = tail = temp;
              else{
                temp->next = head;
                head = temp;
              }
              size ++;
       }
       int  deleteathead(){
        if(size == 0) cout<<"invalid";
        else{
            head = head->next;
        }
            size--;
       }


     int deleteattail(){
        if(size == 0){ cout<<"invalid tail";
        return -1;}
        else{
            node*temp = head;
            while (temp->next != tail)
            {
               temp =  temp->next;
            }
            
            temp->next = NULL;
            tail = temp;
        }
        size--;
     }

     int  deleteatindex(int idx){
             if(idx < 0 || idx>size)  {
             cout<<"invalid";
             return -1;
             }
             else if (idx == 0)   return deleteathead();
             else if( idx  == size-1)  return deleteattail();
             else{
              node*temp = head;
              for(int i=1; i<=idx-1; i++){
                temp = temp->next;
              }
              temp->next = temp->next->next;
              size--;
             }
     }

};

int main(){
    linkedlist ll;
    ll.insertatend(10);
    ll.display();
    ll.insertatend(20);
    ll.insetatbigning(30);
    ll.display();
    ll.insetatbigning(40);
    ll.display();
    ll.insetatbigning(50);
    ll.display();
    ll.deleteathead();
    ll.display();

    ll.deleteattail();
    ll.display();

    ll.deleteatindex(1);
    ll.display();

}