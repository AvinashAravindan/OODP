#include<iostream>
#include<math.h>
using namespace std;
class Volume
{   int val;
    public:
    Volume()
    {
        cin>>val;
    }
    ~Volume()
    {
        cout<<"Volume of a cube is "<<pow(val,3);
    }
};
int main()
{
    Volume obj;
    return 0;

}
