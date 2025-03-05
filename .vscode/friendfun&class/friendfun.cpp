
#include <iostream>
using namespace std;
class rect;
class circle
{
	protected:
	     double radius;
   public:
   void read()
   {
	cout<<"Enter the radius:\n";
	cin>>radius;
   }
   int area()
   {
	double c=3.14*radius*radius;
	return c;
   }
   friend int netarea(circle &c1,rect &r1);

};
class rect
{
	protected:
	     int len,wid;
	public:
	     void read()
		 {
			cout<<"Enter the len and wid";
			cin>>len>>wid;

		 }
		 int area()
		 {
			float a=len*wid;
			return a;
		 }
		 friend int netarea(circle &c1,rect &r1);
};

int netarea(circle &c1,rect &r1)
{
	float b=c1.area();
	float v=r1.area();
	float k=b-v;
	return k;
}
int main()
{
	circle c;
	rect r;
	c.read();
	r.read();
	cout<<"The net area Will be:"<<netarea(c,r);
}