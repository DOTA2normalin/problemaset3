#include <iostream>
using namespace std;

class point{
	private:
		int x,y;
	public:
		point(int u,int v):x(u),y(v){}
		int getx(){return x;}
		int gety(){return y;}
		
};
int main(){
	point *p=new point(5,3);
	cout<<p->getx()<<" "<<p->gety();
	delete p;
	return 0;
}

