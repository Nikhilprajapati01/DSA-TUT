#include<iostream>
#include<vector>
#include<climits>

using namespace std;
int main(){
    int arr[] = {4,5,3,5,6};
    int n = 5;
    for ( int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;


    for(int i=0; i<n-1; i++){
        int min = INT_MAX;
        int index = -1;
        for(int j=i; j<n; j++){
            if(arr[j] < min){
                min = arr[j] ; 
                index = j;
            }
        }
           swap(arr[i],arr[index]);
    }
      for ( int ele : arr){
        cout<<ele<<" ";
       }
}
    
    
