#include<iostream>
using namespace std;
class pyramid
{
	private:
		int r,pattern,SHOW,n,no;
		public:
			pyramid()
			{
				no=5;
				n=no;
			}
			void sol()
			{
				for(r=1;r<=no;r++)
				{
					for(pattern=1;pattern<=n;pattern++)
					{
						cout<<" ";
					}
					n--;
					for(SHOW=1;SHOW<=r;SHOW++)
					{
						cout<<" "<<r;
					}
					cout<<endl;
				}
			}
			~pyramid()
			{
				cout<<endl<<"object destroyed";
			}
};
int main()
{
	pyramid obj;
	obj.sol();
}
