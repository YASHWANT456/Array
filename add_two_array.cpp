# include<bits/stdc++.h>
using namespace std;

void add_array(vector<int>&a,int n,vector<int>&b,int m,vector<int>&ans)
{
    int carry = 0;
    int i = n-1;
    int j = m-1;
    while( i >= 0 && j >= 0)
    {
        int sum = a[i] + a[j] + carry;
        carry = sum/10;
        ans.push_back(sum % 10);
        i--;
        j--;
    }
    while( i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum/10;
        ans.push_back(sum % 10);
        i--;
    }
    while( j >= 0)
    {
        int sum = a[j] + carry;
        carry = sum/10;
        ans.push_back(sum % 10);
        j--;
    }
    while( carry != 0)
    {
        int sum = carry;
        carry = sum/10;
        ans.push_back(sum % 10);
    }
    reverse(ans.begin(),ans.end());


}
int main()
{
    int n;
    cout<<"enter size of first array : ";
    cin>>n;
    cout<<endl;
    vector<int>a(n);
    cout<<"enter elements of first array : "<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cout<<"enter size of second array : ";
    cin>>m;
    cout<<endl;
    vector<int>b(n);
    cout<<"enter elements of second array : "<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>b[i];
    }
    vector<int>ans;
    add_array(a,n,b,m,ans);
    int s = ans.size();
    cout<<"output : ";
    for(int i = 0;i<s;i++)
    {
        cout<<ans[i];
    }
    return 0;

}