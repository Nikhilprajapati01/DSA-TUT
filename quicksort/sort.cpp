#include<iostream>
#include<algorithm>
// #include <bits/stdc++.h>
using namespace std;
int  partision(int arr[],int si, int li){
    int pivotelement = arr[si];
    int count = 0;
    for(int i=si+1; i<=li; i++){
        if(arr[i]<=pivotelement)
        count++;
    }
    int pivotidx = count+si;
    // swap(arr[si],arr[pivotidx]);
    swap(arr[si],arr[pivotidx]);
    int i= si;
    int j= li;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<=pivotelement){
            i++;
        }
        if(arr[j]>=pivotelement){
            j--;
        }
        if(arr[i]>=pivotelement && arr[j]<=pivotelement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
void quicksort(int arr[], int si, int li){
   if(si>=li) return;
   int pivot = partision(arr,si,li);
    //   cout<<pivot;
   quicksort(arr,si,pivot-1);
   quicksort(arr,pivot+1,li);

}
int main(){
    int arr[] = {5,7,1,6,2,6,9};
    int n = sizeof arr/ sizeof arr[0];
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    quicksort(arr,0,n-1);
    
      for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
      }
    }