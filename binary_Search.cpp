#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int arr[], int n, int key)
{
    int low=0, high = n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key) return true;
        else if(arr[mid]<key) low=mid+1;
        else high=mid-1;
    }
    return false;
}

int main()
{
    int arr[100], n, key;
    cout<<"Total Array: ";
    cin>>n;
    cout<<"Array Element: ";
    for(int i=0;i<n; i++)
        cin>>arr[i];
    cout<<"Searcing Key: ";
    cin>>key;
    cout<<"Array is: ";
    bool f= binarySearch(arr,n,key);
    if(f==true) cout<<"yes";
    else cout<<"No";
    return 0;
}
