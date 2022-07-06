# include<bits/stdc++.h>
using namespace std;

bool is_possible(int arr[],int n,int s,int mid)
{
    int st = 1;
    int pages = 0;
    for(int i = 0;i<n;i++)
    {
        
        if( pages + arr[i] > mid)
        {
            st++;
            pages += arr[i];
        }
        else
        {
            pages += arr[i];
        }
    }
    if( st == s)
    {
        return true;
    }
    else
    {
        return false;
    }
} 
int min_allocation(int arr[],int n,int st)
{
    int s = arr[0];
    int sum = 0;
    int ans = -1;
    for(int i = 0;i<n;i++)
    {
        sum += arr[i];
    }
    int e = sum;
    while( s <= e)
    {
        int mid = s + (e-s)/2;
        if(is_possible(arr,n,st,mid))
        {
            ans = mid;
            e = mid-1;
        }
        else
        {
            s = mid +1;
        }

    }
    return ans;
}
int main()
{
    cout<<"Enter size of array : "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array : "<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the no. of student : "<<endl;
    cin>>k;
    int ans = min_allocation(arr,n,k);
    cout<<"Min allocation : "<<ans;
    return 0;
}