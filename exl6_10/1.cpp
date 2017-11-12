include <iostream.h>
float fun(double h)
{
	int n,m;
	n=h*1000;
	m=n%10;
	if(m>=5)
		n=n/10+1;
	else
		n=n/10;
	return n/(double)100;
}
void main()
{
	double h;
	cin>>h;
	cout<<fun(h)<<endl;
}