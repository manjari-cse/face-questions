#include <iostream>
using namespace std;
int main()
{int n,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {if(i%2==1)
    {
        for(j=0;j<n-(n/2);j++)
        {
            cout<<"% ";
        }
    }
    else
    {
    for(k=0;k<n/2;k++)
    {
        cout<<" %";
    }
    }
    cout<<"\n";
}
    return 0;
}
