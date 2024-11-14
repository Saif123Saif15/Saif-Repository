#include<iostream>
using namespace std;
class base{
	private:
		int a,b,c;
		public:
			void input()
			{
				cout<<"enter values of base class:";
				cin>>a>>b;
			}
			void show()
			{
				c=a+b;
				cout<<"sum="<<c<<endl;
			}
};
class base1{
	private:
		int a,b,c;
		public:
			void input1()
			{
				cout<<"enter values of base1 class:";
				cin>>a>>b;
			}
			void show1()
			{
				c=a-b;
				cout<<"subtraction="<<c<<endl;
			}
};
class derive: public base, public base1{
	private:
		int a,b,c;
		public:
			void input2()
			{
				cout<<"enter values of derive class:";
				cin>>a>>b;
			}
			void show2()
			{
				c=a*b;
				cout<<"multiplication="<<c<<endl;
			}
};
int main()
{
	derive ob;
	ob.input();
	ob.show();
	
	ob.input1();
	ob.show1();
	
	ob.input2();
	ob.show2();
	return 0;
}
