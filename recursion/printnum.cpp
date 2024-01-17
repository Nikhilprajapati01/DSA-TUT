#include<iostream>
using namespace std;
int num (int n){
    if(n==0) return 1;
    cout<< n << endl;
    num(n-1);
}
int main(){
     int n;
    cin>>n;
    num (n);
    
}