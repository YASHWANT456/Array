# include<bits/stdc++.h>
using namespace std;

int rainwater_trapping(int arr[],int n)
{
    int left[n];
    int right[n];
    left[0] = arr[0];
    right[n-1] = arr[n-1];
    for(int i = 1;i<n;i++)
    {
        left[i] = max(left[i-1],arr[i]);
    }
    for(int i = n-1;i>=0;i--)
    {
        right[i] = max(right[i+1],arr[i]);
    }
    int ans = 0;
    for(int i = 0;i<n;i++)
    {
        ans += min(left[i],right[i]) - arr[i];
    }
    return ans;
}
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
    int ans = rainwater_trapping(arr,n);
    cout<<"Amount of water trapped : "<<ans;
    return 0;
    
}