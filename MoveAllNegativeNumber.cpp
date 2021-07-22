#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

void moveAllNegative(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] < 0)
        {
            if (i != j)
            {
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
}

void moveAllNegativeTwoPointer(int arr[],int n){
    int left=0,right=n-1;
    while(left<=right){
        if(arr[left]<0 && arr[right]<0){
            left++;
        }
        else if(arr[left]>0 && arr[right] <0){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }else if(arr[left]>0 && arr[right]>0){
            right--;

        }else{
            left++;
            right--;
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
    moveAllNegativeTwoPointer(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}