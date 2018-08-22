/* i/p 1 1 6 & 12 55 55
o/p 13 57 1*/
#include<iostream>
using namespace std;
int main()
{int h1,m1,s1,h2,m2,s2,m3,s3,h3;
	cin>>h1>>m1>>s1;
	cin>>h2>>m2>>s2;
	s3=s1+s2;
	if(s3>=60)
	{
		s3=s3-60;
		m3=m1+m2+1;
	}
	if(m3>=60)
	{
		m3=m3-60;
		h3=h1+h2+1;
	}
	else
	h3=h1+h2;
	cout<<h3<<" "<<m3<<" "<<s3;
}
