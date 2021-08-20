#include <iostream>
using namespace std;

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void insertionSort(int array[], int n) {
  for (int i = 1; i< n; i++) {
    int key = array[i];
    int j = i - 1;
   
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
      
    }
    array[j + 1] = key;
  }
 
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
        int size = sizeof(arr)/sizeof(arr[0]);
        insertionSort(arr, size);
        cout << "Sorted array in ascending order:\n";
        printArray(arr, size);
         } 
        
    }

  
  
  
