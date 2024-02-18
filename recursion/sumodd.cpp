#include<iostream>
using namespace std;
int sum (int i , int n){
    if(i>n) return 0;
    int ans = i+= sum(i+2,n);
    return ans;
    


}
int main(){
    int n;
    cin>>n;
    cout<<sum(1,n)<<endl;
    
}