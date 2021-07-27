# include <iostream>
using namespace std;


void jumpSearch(int n , int arr[], int k)
{
    int lowerLimit = 0 , upperLimit = 2 , totalComparisons = 0, flag = 0;
  
    while(1)
    {
        if(k > arr[lowerLimit] && k < arr[upperLimit])
        break;
        
        else if(k == arr[lowerLimit] || k == arr[upperLimit])
        {
             totalComparisons++;
             cout<<"Present with total comparisons "<<" "<<totalComparisons;
             cout<<"\n";
             return;
        }
       
        lowerLimit = upperLimit;
        upperLimit = upperLimit * 2;
       
       if(flag == 1)
       {
           cout<<"Not Present with total comparisons "<<" "<<totalComparisons;
           cout<<"\n";
           return;
       }
       
        if(upperLimit >= n - 1)
        {
            flag = 1;
            upperLimit = n - 1;
        }
        
    }
    
    
    for(int i = lowerLimit + 1; i < upperLimit; i++)
    {
        if(arr[i] == k)
        {
            totalComparisons++;
            cout<<"Present with total comparisons "<<" "<<totalComparisons;
            cout<<"\n";
            return;
        } 
        
        else
        totalComparisons++;
    }
    cout<<"Not Present with total comparisons "<<" "<<totalComparisons;
    cout<<"\n";
}

int main()
{
   int t;
    cout<<"Enter number of test cases ";
    cin>>t;
    for(int j = 1; j <=t; j++)
    {
        int n, k;
        cout<<"Enter number of elements and the key number";
        cout<<"\n";
        cin>>n;
        cin>>k;
        int arr[n];
        cout<<"Enter Elements ";
        for(int i = 0; i < n; i++)
        cin>>arr[i];
        jumpSearch(n,arr,k);
    }
    return 0;
}
