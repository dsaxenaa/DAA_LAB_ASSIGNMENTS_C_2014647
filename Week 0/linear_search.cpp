# include <iostream>
using namespace std;

void linearSearch(int n, int Array[], int k)
{
    int flag = 0, totalComparisons = 0;
    for(int i = 0; i < n; i++)
    {
        if(Array[i] == k)
        {
            flag = 1;
            totalComparisons++;
            break;
        }
        
        else
        totalComparisons++;
    }
    
    if(flag == 1)
    cout<<"Present in the Array with total comparisons"<<" "<<totalComparisons<<"\n";
    
    else
    cout<<"Not Present in the Array with total comparisons"<<" "<<totalComparisons<<"\n";
}

int main()
{
    int t;
    cout<<"Enter number of test cases";
    cin>>t;
    int n,k;
    for(int i = 1; i <= t; i++)
    {
        cout<<"Enter number of elements and the key element";
        cin>>n>>k;
        int Array[n];
        for(int j = 0; j < n; j++)
        cin>>Array[j];
        linearSearch(n,Array,k);
    }
    return 0;
}
