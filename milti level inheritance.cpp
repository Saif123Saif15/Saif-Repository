#include<iostream>
using namespace std;
class base{
	protected:
		int a;
		public:
			void input()
			{
				cout<<"enter values of base class:";
				cin>>a;
			}
			void show()
			{
				cout<<"a="<<a<<endl;
			}
};
class derive:public base{
	protected:
		int b;
		public:
			void input1()
			{
				cout<<"enetr values of derive class:";
				cin>>b;
			}
			void show1()
			{
				cout<<"b="<<b<<endl;
			}
};
class derive2:public derive{
	protected:
		int c;
		public:
			void input2()
			{
				cout<<"enetr values of derive2 class:";
				cin>>c;
			}
			void show2()
			{
				cout<<"c="<<c<<endl;
			}
};
int main()
{
	derive2 ob;
	ob.input();
	ob.show();
	
	ob.input1();
	ob.show1();
	
	ob.input2();
	ob.show2();
	return 0;
}
