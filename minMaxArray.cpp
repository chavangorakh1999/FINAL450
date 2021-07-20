#include <iostream>
using namespace std;

struct Pair
{
    int min;
    int max;
};

struct Pair getMinMax(int arr[], int n)
{
    struct Pair minMax;

    if (n == 1)
    {
        minMax.min = arr[0];
        minMax.max = arr[0];
        return minMax;
    }
    if (arr[0] > arr[1])
    {
        minMax.max = arr[0];
        minMax.min = arr[1];
    }
    else
    {
        minMax.max = arr[1];
        minMax.min = arr[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] < minMax.min)
        {
            minMax.min = arr[i];
        }
        else if (arr[i] > minMax.max)
        {
            minMax.max = arr[i];
        }
    }
    return minMax;
}

struct Pair getMinMaxInPairs(int arr[], int n)
{
    struct Pair minmax;
    int i;
    if (n % 2 == 0)
    {
        if (arr[0] > arr[1])
        {
            minmax.min = arr[1];
            minmax.max = arr[0];
        }
        else
        {
            minmax.max = arr[1];
            minmax.min = arr[0];
        }
        i=2;
    }
    else
    {
        minmax.min = arr[0];
        minmax.max = arr[0];
        i = 1;
    }

    while (i < n - 1)
    {
        if (arr[i] > arr[i + 1])
        {
            if (arr[i] > minmax.max)
            {
                minmax.max = arr[i];
            }
            if (arr[i + 1] < minmax.min)
            {
                minmax.min = arr[i + 1];
            }
        }else {
            if(arr[i+1]>minmax.max){
                minmax.max=arr[i+1];
            }
            if(arr[i] < minmax.min){
                minmax.min=arr[i];
            }
        }
        i +=2;
    }

    return minmax;
}

struct Pair getMinMaxTournament(int arr[], int low, int high)
{
    struct Pair minmax, mml, mmr;
    int mid;
    if (low == high)
    {
        minmax.min = arr[low];
        minmax.max = arr[low];
        return minmax;
    }
    if (high == low + 1)
    {
        if (arr[low] < arr[high])
        {
            minmax.min = arr[low];
            minmax.max = arr[high];
        }
        else
        {
            minmax.min = arr[high];
            minmax.max = arr[low];
        }
        return minmax;
    }
    mid = (low + high) / 2;
    mml = getMinMaxTournament(arr, low, mid);
    mmr = getMinMaxTournament(arr, mid + 1, high);
    if (mml.min > mmr.min)
    {
        minmax.min = mmr.min;
    }
    else
    {
        minmax.min = mml.min;
    }
    if (mml.max > mmr.max)
    {
        minmax.max = mml.max;
    }
    else
    {
        minmax.max = mmr.max;
    }
    return minmax;
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
    // for(auto i : arr){
    //     cout<<i<<" ";
    // }
    cout << endl;
    // struct Pair minMax = getMinMaxTournament(arr, 0, n - 1);
    struct Pair minMax = getMinMaxInPairs(arr,n);
    cout << minMax.min << " " << minMax.max;
    return 0;
}
