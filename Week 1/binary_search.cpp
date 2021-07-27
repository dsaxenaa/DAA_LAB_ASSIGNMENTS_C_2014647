# include <iostream>
using namespace std;

void binarySearch(int n, int arr[], int k)
{
    int lowerLimit = 0 , upperLimit = n - 1 , midValue , totalComparisons = 0;
    while(upperLimit >= lowerLimit)
    {
        midValue = (lowerLimit + upperLimit)/2;
        
        if(arr[midValue] < k)
        {
            lowerLimit = midValue + 1;
            totalComparisons++;
        }
        
        else if(arr[midValue] > k)
        {
            upperLimit = midValue - 1;
            totalComparisons++;
        }
        
        else
        {
            totalComparisons++;
            cout<<"Present in the array with total comparisons "<<" "<<totalComparisons;
            cout<<"\n";
            return;
        }
        
    }
    cout<<"Not Present in the array with total comparisons "<<" "<<totalComparisons;
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
        binarySearch(n,arr,k);
    }
    return 0;
}
