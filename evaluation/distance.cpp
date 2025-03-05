/*Create a class called Point with private data members x and y. Create a friend function 
called calculateDistance() that takes two Point objects as parameters and calculates the 
distance between them using the distance formula. Display the distance between two 
points in the main function.*/
#include<iostream>
#include<math.h>
using namespace std;
class point
{
    private:
    int x,y;
    public:
    point(int a,int b):x(a),y(b){}
    friend int calculate(point &p1,point &p2);
};
int calculate(point &p1,point &p2)
{
    return sqrt(((p2.y-p1.y)^2)+((p2.x-p1.x)^2));
  
}
int main()
{
    point p1(10,20),p2(20,10);
    float a=calculate(p1,p2);
    cout<<"The distence between two points is:"<<a<<endl;

}
