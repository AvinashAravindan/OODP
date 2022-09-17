#include<iostream.h>
#include<conio.h>
class date
{
int day;
int month,year;
public:
friend istream &operator>>(istream &scan,date &d)
{
cout<<“Enter the date: DAY MONTH YEAR\n”;
scan>>d.day>>d.month>>d.year;
return scan;
}
friend ostream &operator<<(ostream &print,date &d)
{
print<<d.day<<“/”<<d.month<<“/”<<d.year;
return print;
}
};
void main()
{
date dd;
clrscr();
cin>>dd;
cout<<“\nDATE: “;
cout<<dd;
getch();
}
