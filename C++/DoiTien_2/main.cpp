#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,res=0;
		cin >> n;
		if(n>=1000)
		{
			res+=n/1000;
			n%=1000;
		}
		if(n>=500)
		{
			res+=n/500;
			n%=500;
		}
		if(n>=200)
		{
			res+=n/200;
			n%=200;
		}
		if(n>=100)
		{
			res+=n/100;
			n%=100;
		}
		if(n>=50)
		{
			res+=n/50;
			n%=50;
		}
		if(n>=20)
		{
			res+=n/20;
			n%=20;
		}
		if(n>=10)
		{
			res+=n/10;
			n%=10;
		}
		if(n>=5)
		{
			res+=n/5;
			n%=5;
		}
		if(n>=2)
		{
			res+=n/2;
			n%=2;
		}
		if(n>=1)
		{
			res+=n;
		}
		cout << res << endl;
	}
}
