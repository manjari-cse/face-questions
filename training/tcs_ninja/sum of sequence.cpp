
/* sum of 1+(1/2)^2+(1/3)^3+.....
ip =3
op=1.28704*/
#include <iostream>
using namespace std;
int main()
{int n,i,j;
float a,prod=1.0,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        prod=1;
        a=1.0/i;
        for(j=1;j<=i;j++)
        {
            prod=prod*a;
        }
        sum=sum+prod;
    }
    cout<<sum;
    return 0;
}
