#include<iostream> 35940059724
using namespace std;
class parent
{
	public : int x;
	public  : int y;
	protected : int z;
	public : parent ()
	{
		cout<<" enter any 3 int value"<<endl;
		cin>>x>>y>>z;
	}	
};
        class child : public parent
        {
        	public : void show()
        	{
        		cout<<"x="<<x<<"y="<<y<<"z="<<z;
		 }
	 };
	 int main()
	 {
	 	child obj;
	 	obj. show () ;
	 }
