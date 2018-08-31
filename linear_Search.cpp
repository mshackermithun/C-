#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key) return true;
    }
    return false;
}

int main()
{
    int arr[100],n,key;
    cout<<"Total Array: ";
    cin>>n;
    cout<<"array Element: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Searching key: ";
    cin>>key;
    bool f = linearSearch(arr, n, key);
    cout<<"key is: ";
    if(f==true) cout<<"Yes";
    else cout<<"No";
    return 0;
}
