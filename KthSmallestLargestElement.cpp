#include<iostream>
#include<algorithm>
#include<iterator>
#include<set>


int getElementBySort(int arr[],int n,int k){
    std::sort(arr,arr+n);
    return arr[k-1];
}

int getElementBySet(int arr[],int n,int k){
    std::set<int> s(arr,arr+n);
    std::set<int>::iterator itr = s.begin();
    std::advance(itr,k-1);
    return *itr;
}

int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<getElementBySet(arr,n,3);
    return 0;
}