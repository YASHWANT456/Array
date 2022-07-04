# include<bits/stdc++.h>
using namespace std;

bool search(int arr[],int n,int target)
{
    int s = 0;
    int e = n-1;
    bool flag = false;
    while( s <= e)
    {
        int mid = s + (e-s)/2;
        if( arr[mid] == target)
        {
            flag = true;

        }
        if( arr[mid] > arr[s])
        {
            if( target >= arr[s] && target < arr[mid])
            {
                e = mid-1;
            }
            else
            {
                s = mid+1;

            }
            
        }
        else
        {
            if( target > arr[mid] && target <= arr[e])
            {
                s = mid+1;
            }
            else
            {
                e = mid-1;

            }

        }
    }
    if( flag == true)
    {
        return true;
    }
    else
    {
        return false;
    }
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
    int target;
    cout<<"Enter target : "<<endl;
    cin>>target;
    if(search(arr,n,target))
    {
        cout<<"Element found";
    }
    else
    {
        cout<<"Element not found";
    }
    return 0;

}