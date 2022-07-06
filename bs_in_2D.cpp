# include<bits/stdc++.h>
using namespace std;

bool search2(int arr[][3],int n,int target,int mid)
{
    int s = 0;
    int e = n-1;
    while( s <= e)
    {
        int m = s + (e-s)/2;
        if( arr[mid][m] == target)
        {
            return true;
        }
        if( arr[mid][m] > target)
        {
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }

    }
    return false;
}
bool search(int arr[][3],int n,int target)
{
    int s = 0;
    int e = n-1;
    while( s <= e)
    {
        int mid = s + (e-s)/2;
        if( arr[mid][0] == target)
        {
            return true;
        }
        if( arr[mid][n-1] == target)
        {
            return true;
        }
        if( target > arr[mid][0]  && target < arr[mid][n-1])
        {
            return search2(arr,n,target,mid);
        }
        if( target < arr[mid][0])
        {
            e = mid-1;
        }
        if( target > arr[mid][n-1])
        {
            s = mid +1;
        }
    }
    return false;
}
int main()
{
    int n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    int arr[n][n];
    cout<<"Enter elements of array : "<<endl;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int target;
    cout<<"Enter the target : "<<endl;
    cin>>target;
    if(search(arr,n,target))
    {
        cout<<"Element found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    return 0;
}