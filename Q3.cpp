#include<iostream>
#include<conio.h>
using namespace std;
class cube
{
	private:
		int i,n;
		public:
			cube()
	        {
	        	i=1;
	        	n=0;
	        }
	        cube(int p, int q)
	        {
	        	i=p;
	        	n=q;
			}
			void display()
			{
				cout<<"enter the number :"<<endl;
				cin>>n;
				for(i=1; i<=n; i++)
				{
							cout<<" The cube of"<<i<<"is ="<<(i*i*i)<<endl;

				}
			}
			~cube()
			{
				cout<<" clear :"<<endl;
			}
		};
int main()
   {
   	int p,q;
	cube obj(p,q);
	obj.display();
	getch();
}
