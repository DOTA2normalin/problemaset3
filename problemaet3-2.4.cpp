#include <iostream>
using namespace std;

class point{
	private:
		int x,y;
	public:
		point(int u,int v) :x(u),y(v){}
		int getx(){return x;
		}
		void setx(int newx){x=newx;
		}
};
int main(){
	point p(5,3);
	p.setx(0);
	cout<<p.getx();
	return 0;
}
