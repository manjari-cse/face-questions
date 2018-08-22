#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],n,i;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    cout<<"\nAscending: ";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<"\nDescending: ";
    sort(a,a+n,greater<int>());
      for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

    return 0;
}
