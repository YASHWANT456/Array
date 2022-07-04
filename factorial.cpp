# include<bits/stdc++.h>
using namespace std;

vector<int>factorial(int n)
{
    vector<int>ans;
    ans.push_back(1);
    int carry = 0;
    for(int i = 2;i<=n;i++)
    {
        int sum = 0;
        for(int j = 0;j<ans.size();j++)
        {
            sum += ans[j]*i + carry;
            ans[i] = sum %10;
            carry = sum/10;
        }
        while( carry != 0)
        {
            ans.push_back(carry%10);
            carry = carry/10;
        }
        
    }

    reverse(ans.begin(),ans.end());
    return ans;
}