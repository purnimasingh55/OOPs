#include<iostream>
using namespace std;
class demo{
	int a,b;
	public:
	demo(int x, int y){
		a = x;
		b = y;
	}
	void show(){
		cout<<a<<" "<<b<<endl;
	}
	demo operator +(demo obj){
		demo temp(0,0);
		temp.a = a+obj.a;
		temp.b =  b+obj.b;
		return temp;
	}
};
int main(){
	demo a(10,20), b(30,40), c(0,0);
	c = a + b;
	c.show();
}
