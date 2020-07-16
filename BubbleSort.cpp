#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,t,swap=0;
    cin>>n;
    int a[n];
    bool check=true;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (i=0;i<n-1;i++)
    {
        check=true;
        for(j=0;j<n-1;j++)
        {
            if(a[j+1]<a[j])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                swap++;
                check=false;
            }
        }
        if (check)
            break;//break the loop if sorted before completing n*n iteration.
    }
    for (i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<"Array is sorted in "<< swap <<" swaps."<<endl;//print the number of swaps.
    
    return 0;
}
