#include<iostream>
#include<algorithm>

int getElementBySort(int arr[],int n,int k){
    std::sort(arr,arr+n);
    return arr[k-1];
}


int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<getElementBySort(arr,n,3);
    return 0;
}