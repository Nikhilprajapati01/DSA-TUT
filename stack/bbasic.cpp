#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl;
    stack<int> temp;
    // while (st.size()>0)
    // {
    //     cout<<st.top()<<" ";
    //       int x = st.top();
    //       st.pop();
    //       temp.push(x);
    // }

    // while (temp.size()>0)
    // {
    //     int x = temp.top();
    //     temp.pop();
    //     st.push(x);
    // }
    
    while (st.size()>0)
    {
        // cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    cout<<st.size()<<endl;
    while (temp.size()>0)
    {
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<st.size();
    
}