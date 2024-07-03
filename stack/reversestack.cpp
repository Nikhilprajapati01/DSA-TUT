#include<iostream>
#include<stack>
using namespace std;
void print ( stack<int> st){
    stack<int>temp;
    while (st.size()>0)
{
    temp.push(st.top());
    st.pop();
}

while (temp.size()>0)
{
    cout<<temp.top()<<" ";
    temp.pop();
}

}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    print (st);
    // cout<<st.size()<<endl;


    stack<int> gt;

    while (st.size()>0)
    {
        gt.push(st.top());
        st.pop();
    }

    stack<int>ct;

    while (gt.size()>0)
    {
        ct.push(gt.top());
        ct.pop();
    }

    while (ct.size()>0)
    {
        st.push(ct.top());
        ct.pop();

    }
   print (st);

    
    
    
}