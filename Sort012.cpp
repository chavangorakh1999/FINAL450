#include<iostream>
#include<algorithm>
using namespace std;

void getSortedArayBySwitch(int arr[],int n){
    int low=0;
    int high=n-1;
    int mid=0; //Initially

    while(mid<=high){
        switch(arr[mid]){

            case 0:
                swap(arr[low++],arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid],arr[high--]);
                break;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    getSortedArayBySwitch(arr,n);
  cout<<endl;
     for(int i;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}