#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int helper(vector<int> arr, int n)
{
    sort(arr.begin(), arr.end());
    int ans=0;
    for(int i=0;i<n; i++)
    {
       if(i==0 || arr[i] != arr[i-1])
        ans++;
    }
    return ans;
}
 
int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    int temp;
    for(int i=0;i<n; i++)
    {
        cin>>temp;
         arr.push_back(temp);
    }
   
 
    cout<<helper(arr, n);
    return 0;
}