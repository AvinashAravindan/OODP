#include<iostream>
using namespace std;
class shape_Floyds_Triangle
{
	public:
		int i,j,p,q,n;
		public:
			shape_Floyds_Triangle()         			{
             	cout<<"Please enter the no of rows";
	            cin>>n;
               	for(i=1;i<=n;i++)
             	{
		if(i%2==0)
		{
			p=1;
			q=0;
		}
		else
		{
			p=0;
			q=1;
		}
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				cout<<p;
			}
			else
			{
				cout<<q;
			}
		}
		cout<<endl;
	}
}
	~shape_Floyds_Triangle()
	{
	}
};
int main()
{
	shape_Floyds_Triangle object;
	return 0;
}
