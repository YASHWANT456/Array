# include<bits/stdc++.h>
using namespace std;

int min_platform(int arr[],int dep[],int n1,int n2)
{
    int platform = 1;
    int ans = 1;
    int i = 0;
    int j = 1;
    while( j  < n1 && i < n2)
    {
        if( dep[i] > arr[j])
        {
            platform++;
            j++;
        }
        else
        {
            platform--;
            i++;
        }
        ans = max(ans,platform);
    }
    return ans;


}
int main()
{
    int n;
    cout<<"Enter size of array1 : "<<endl;
    cin>>n;
    int arr1[n];
    cout<<"Enter elements of array1 : "<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>arr1[i];
    }
    int n1;
    cout<<"Enter size of array2 : "<<endl;
    cin>>n1;
    int arr2[n1];
    cout<<"Enter elements of array2 : "<<endl;
    for(int i = 0;i<n1;i++)
    {
        cin>>arr2[i];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    int ans = min_platform(arr1,arr2,n,n1);
    cout<<"Min platform : "<<ans;
    return 0;
}
