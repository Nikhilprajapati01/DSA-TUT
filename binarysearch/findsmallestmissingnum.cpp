#include<iostream>
using namespace std;
int main () {
  int arr []= {0,1,2,4,5,6,7};
  int n = 6;

  int low =0; 
  int high = n-1;
  int min = -1;
     for(int i=0; i<n; i++){
        int mid = low + high -low /2;
        if(arr[mid] == mid){
         low = mid + 1;
        }
        else
        {
            min = mid;
            high = mid -1;
        }
     }
       cout<<min; 

}