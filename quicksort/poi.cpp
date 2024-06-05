#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int y = 8;

    int *a = &x;
    int *b = &y;


    cout<<*a+*b;
}