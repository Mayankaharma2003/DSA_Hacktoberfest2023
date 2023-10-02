#include<iostream>
using namespace std;
class Test
{
	public:
		int a,b,c;
		Test(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}
		void show()
		{
			cout<<a<<"\t"<<b<<"\t"<<c<<endl;
		}
		Test()
		{
			a=0;
			b=0;
			c=0;
		}
		Test operator+(Test&t)
		{
			Test temp;
			temp.a=a+t.a;
			temp.b=b+t.b;
			temp.c=c+t.c;
			return(temp);
		}
		Test operator-(Test&t)
		{
			Test temp;
			temp.a=a-t.a;
			temp.b=b-t.b;
			temp.c=c-t.c;
			return(temp);
		}
};
int main()
{
	Test t1(10,20,30);
	Test t2(100,200,300);
	Test t3;
	Test t4;
	t3 = t1+t2;
	t4=t1-t2;
	t1.show();
	t2.show();
    t3.show();
	t4.show();
	return(0);
}
