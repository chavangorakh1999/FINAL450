#include <iostream>
#include<algorithm>
#include <iterator>
using namespace std;

void moveAllNegative(int arr[], int n)
{
    int j=0;
    for (int i = 0; i < n; i++)
    {
        
        if (arr[i] < 0)
        {
           if (i != j){
               swap(arr[i], arr[j]);
               j++;
           }
                
            
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    moveAllNegative(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}