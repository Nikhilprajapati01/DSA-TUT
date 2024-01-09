#include<iostream>
#include<vector>
#include<climits>

using namespace std;
int main(){
    int arr[] = {5,30,1,-2,-4};
    int n = 5;
    for ( int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    for(int i=1; i<=n-1; i++){
        int j = i;
        while (j>=1)
        {
            if(arr[j]>=arr[j-1]){
                break;
            }
            if(arr[j]< arr[j-1]){
              swap(arr[j],arr[j-1]);
              j--;
            }
        }
        
    }
        for ( int ele : arr){
        cout<<ele<<" ";
    }
}