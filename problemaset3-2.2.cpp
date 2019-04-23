#include <iostream>
using namespace std;

class point{
	private:
		int x,y;
	public:
		point(int u,int v):x(u),y(v){}
		int getx(){return x;}
		int gety(){return y;}
		void setx(int newx){x=newx;}
		
};

int main(){
	point p(5,3);
	p.setx(9001);
	cout<<p.getx()<<" "<<p.gety();
	return 0;
}
