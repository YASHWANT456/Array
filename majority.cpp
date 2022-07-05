# include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array : "<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<int,int>m;
    for(int i = 0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for(auto i :m)
    {
        if(i.second > n/2)
        {
            cout<<"majority element : "<<i.first;
            break;
        }
    }
    return 0;
}