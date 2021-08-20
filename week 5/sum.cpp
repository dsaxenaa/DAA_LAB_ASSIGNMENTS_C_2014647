#include <iostream>
using namespace std;


void sum(int arr[], int n,int k) {
    int i,f=0;

    for(i=0;i<n;i++){
        int j=n-1;
        while(j>i){
            if(arr[i]+arr[j]==k){
                cout<<arr[i]<<" "<<arr[j]<<",";
                f=1;
                break;
            }
         j--;
        }
    }
    if(f==0){
        cout<<"No Such pair Exist"<<"\n";
    }

 
}


int main() {
   int t;
    cout<<"Enter number of test cases ";
    cin>>t;
    for(int j = 1; j <=t; j++)
    {
        int n,k;
        cout<<"Enter number of elements";
        cout<<"\n";
        cin>>n;
        int arr[n];
        cout<<"Enter Elements ";
        for(int i = 0; i < n; i++)
        cin>>arr[i];
        cout<<"Enter key"<<"\n";
        cin>>k;
        cout << "Pairs are: \n";
        sum(arr, n, k);
        
       
         } 
        
    }
