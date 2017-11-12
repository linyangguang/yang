#include <iostream.h>
float fun(double n)
{
	float a,b=0,c;
	double s=0;
	for(a=1;a<=n;a++)
	{
		b=b+a;
		c=1/b;
		s=s+c;
	}
	return s;
}
void main()
{
	double n;
	cin>>n;
	cout<<fun(n)<<endl;
}