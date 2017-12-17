#include <iostream.h>
void fun(int *p)
{
	int i,n;
	for(i=0;i<5;i++)
	{
		n=*(p+i);
		*(p+i)=*(p+9-i);
		*(p+9-i)=n;
	}
}
void main()
{
	int a[10],i,*p;
	cout<<"请输入十个整数："<<endl;
	for(i=0;i<10;i++)
		cin>>a[i];
	p=a;
	fun(p);
	for(i=0;i<10;i++)
		cout<<*(p+i)<<" ";
	cout<<endl;
}