# include<bits/stdc++.h>
using namespace std;

bool is_subset(int arr1[],int n,int arr2[],int m)
{
    set<int>s;
    for(int i = 0;i<n;i++)
    {
        s.insert(arr1[i]);
    }
    int p = s.size();
    for(int i = 0;i<m;i++)
    {
        s.insert(arr2[i]);
    }
    int q = s.size();
    if( p == q)
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
    if(is_subset(arr1,n,arr2,n1))
    {
        cout<<"Array is subset of another array";
    }
    else
    {
        cout<<"array is not subset of another array";
    }
    return 0;
}