// #include<iostream>
// using namespace std;
// void print (int n){
//     if( n == 0) return;
// cout<<"good morning"<< endl;
//       print(n-1);
// }
// int main () {
//     int n;
//     cin>>n;
//   print (n);
// }


// sum 1 to n;

#include<iostream>
using namespace std;
int sum (int i , int n){
    if(i>n) return 1;
    int sum1 = i * i+1;
     cout<<sum1<<endl;
     sum(i+1 ,n);
}
int main(){
    int n;
    cin>>n;
    sum(1,n);
}