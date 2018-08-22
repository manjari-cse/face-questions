/*
ip c,c++ op= P,P++
ip focus academy op= SBPHF NPNQHI*/
#include <iostream>
using namespace std;

int main()
{string a,b;
int len,i;
getline(cin,a);
len=a.size();
for(i=0;i<len;i++)
{ if(a[i]>='a'&&a[i]<='z')
   a[i]=a[i]-32;
}
int c=0;
for(i=0;i<len;i++)
{
    if(a[i]>='A'&&a[i]<='Z')
    {
        if(a[i]<'N')
        b[c]=a[i]+13;
        else
        b[c]=a[i]-13;
    }
    else
    {
    b[c]=a[i];
    }
    c++;
}
cout<<a;
    return 0;
}
