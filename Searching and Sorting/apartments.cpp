#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int appNo, apNo, k;
    cin>>appNo>>apNo>>k;
    vector<int> applicants(appNo);
    vector<int> apartment(apNo);
    for(int i=0;i<appNo; i++)
        cin>>applicants[i];

    for(int i=0; i<apNo; i++)
        cin>>apartment[i];

    sort(apartment.begin(), apartment.end());
    sort(applicants.begin(), applicants.end());
    int ans=0;
    int i=0, j=0;

    while(i<appNo)
    {
        while(j<apNo && apartment[j]<applicants[i]-k)
        j++;

        if(abs(apartment[j]-applicants[i]) <= k)
        {
            ans++;
            i++;
            j++;
        }
        else
        i++;
    }
    

    cout<<ans;
    return 0;
}