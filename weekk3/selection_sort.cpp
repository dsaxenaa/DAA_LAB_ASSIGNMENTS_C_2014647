#include <iostream>
using namespace std;


void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selectionSort(int arr[], int n) {
    int swaps=0,comp=0;
   for (int i = 0; i < n-1 ; i++)  
        {  
            int index = i;  
            for (int j = i + 1; j < n; j++){  
                if (arr[j] < arr[index]){  
                    index = j;  
                } 
                comp++; 
            }  
            int smallerNumber = arr[index];   
            arr[index] = arr[i];  
            arr[i] = smallerNumber;  
            swaps++;
        } 
        cout<<"comparisons are "<<comp<<"\n";
        cout<<"swaps are "<<swaps<<"\n";
}


int main() {
   int t;
    cout<<"Enter number of test cases ";
    cin>>t;
    for(int j = 1; j <=t; j++)
    {
        int n;
        cout<<"Enter number of elements";
        cout<<"\n";
        cin>>n;
        int arr[n];
        cout<<"Enter Elements ";
        for(int i = 0; i < n; i++)
        cin>>arr[i];
        selectionSort(arr, n);
        cout << "Sorted array in ascending order:\n";
        printArray(arr, n);
         } 
        
    }
