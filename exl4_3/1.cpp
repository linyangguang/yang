#include<iostream.h>
void main()
{
	int i,j;
	cout<<"������һ��������"<<endl;
	cin>>i;
	j=0;
	while(i!=1)
	{
		j++;
			if(i%2==1)
			i=3*i+1;
	else
		    if(i%2!=1)
		    i=0.5*i;
	}
	j=j-1;
	cout<<"�����ĽǹȲ��벽������"<<j<<endl;
}