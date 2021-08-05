#include <iostream>
#include <bits/stdc++.h>
#include <set>
using namespace std;

set<int> getUnion(int arr1[], int n, int arr2[], int m)
{
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        s.insert(arr2[i]);
    }
    return s;
}

int main()
{
    int n, m;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    set<int> result;
    result = getUnion(arr1, n, arr2, m);
    cout << result.size() << endl;
    for (auto i : result)
    {
        cout << i << " ";
    }




    return 0;
}