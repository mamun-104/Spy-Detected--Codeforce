#include<iostream>
#include<bits/stdc++.h>
// khub e easy but onk kosto hoilo!
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int p,q,pcount=1,qcount=0,pi=0,qi=0;
        int i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];

        }
        p=a[0];
        pi=1;
        for(i=1;i<n;i++)
        {
            if(p==a[i]){pcount++;}
            else
            {
                q=a[i];
                qcount++;
                qi=i+1;
            }
        }
        if(pcount<qcount){cout<<pi<<"\n";}
        else cout<<qi<<"\n";


    }


    return 0;
}


