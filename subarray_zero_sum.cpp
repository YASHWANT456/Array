# include<bits/stdc++.h>
using namespace std;

void subarray(int arr[],int n,int k)
{
    int i = 0;
    int j = 0;
    int sum = 0;
    while( j < n)
    {
        sum += arr[j];
        j++;
        if( sum > k && i<j)
        {
            sum -= arr[i];
            i++;
        }
        if( sum == k)
        {
            cout<<i<<" "<<j-1<<endl;
        }
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
    int k;
    cout<<"Enter the value of k : "<<endl;
    cin>>k;
    subarray(arr,n,k);
    return 0;
    
}