
#include <iostream.h>
int fun(int m)
{
	int n=0;
	cout<<"1��"<<m<<"֮���ܱ�7��11�����������У�"<<endl;
	for(int i=1;i<=m;i++)
	{
		if(i%7==0||i%11==0)
		{
			cout<<i<<" ";
			n++;
		}
	}
	return n;
}
void main()
{
	int m,n;
	cout<<"������һ��������"<<endl;
	cin>>m;
	n=fun(m);
	cout<<"n="<<n<<endl;
}