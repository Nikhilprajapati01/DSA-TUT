#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr,vector<int> &brr, vector<int> &re ){
      int i=0;
      int j=0; 
      int k=0;
      while (i<arr.size() && j<brr.size())
      {
        if(arr[i]< arr[j]) {
            re[k] = arr[i];
            i++;
            k++;
        }else{
            re[k] = brr[j];
            k++;
            j++;
        }

      }
      if(i==arr.size()){
        while (j<brr.size()){
            re[k++]= brr[j++];
        }  
      }
      if(j==brr.size()){
        while (i<arr.size()){
            re[k++]= arr[i++];
        }
        
      }
      
}
int main(){
   int a[] = {1,4,5,8};
   int n1 = sizeof(a)/sizeof(a[0]);
   vector<int> arr(a,a+n1);
   int b[] = { 2,3,6,7,10,12};
   int n2 = sizeof(b)/sizeof(b[0]);
   vector<int> brr(b,b+n2);
   int res [ n1 +n2];
   vector<int> re(n1+n2);
   merge(arr,brr,re);

   for(int i=0; i<re.size(); i++){
    cout<<re[i]<<" ";
   }

}