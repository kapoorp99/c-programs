#include<bits/stdc++.h>
using namespace std;
class D{
int km,m;
public:
D(int s,int t)
{
	km=s;
	m=t;
}
friend D operator+(D a,D b)
{
	return D((a.km+b.km),(a.m+b.m));
}
void display()
{
	cout<<"sum:"<<km<<"km"<<m<<"m";
}
};
int main()
{
	D d1,d2,d3;
	d2(5,10);
	d3(10,20);
	d1=d2+d3;
	d1.display();
	getch();
	return 0;
}
