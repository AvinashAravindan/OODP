#include <iostream>
using namespace std;
class decimal
{
	private:
		int i=1,j=n,n,l_decimal=n,l_binary=0;
	public:
	    decimal()
			int deci()
			{
				cout<<"decimal number";
				cin>>n;
			}
			~int bin()
			{
				for(j=n;j>0;j=j/2)
				{
					l_binary=l_binary+(n%2)*i;
					i=i*10;
					n=n/2;
				}
				cout<<("l_binary=",l_decimal,l_binary);
			}
		};
		int main()
		{
			decimal A;
			A.deci();
			A.bin();
		}
