#include <bits/stdc++.h>
using namespace std;
template <typename T>
void reverseBySwap(T arr[],int start,int end){
    
    while(start<end){
    T temp= arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
    }
}
template <typename T>
void reverseByRecursion(T arr[],int start,int end){
    if(start > end){
        return;
    }
    T temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    reverseByRecursion(arr,start+1,end-1);
}

template <typename T>
void printArray(T arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}

int main()
{
    int n;
    cin >> n;
    // ----Iterative Way----
    // int ReverseArray[n];
    // for(int i=n-1;i>=0;i--){
    //     cin>>ReverseArray[i];
    // }

    // ----Swapping----
     int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverseByRecursion(arr,0,n-1);
    printArray(arr,n);
    return 0;
}
