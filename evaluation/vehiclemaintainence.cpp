/*Imagine you have a base class called Vehicle and derived classes like Car and 
Bike. You want to implement a maintenance system that needs access to the 
private members of both the base and derived classes. How would you use a 
friend class to achieve this?*/
#include<iostream>
using namespace std;
class vehicle
{
    private:
         string vno;
         string regdate;
         string regno;
         string rc;
    public:
          void readvehicles()
          {
            cout<<"Enter The Details Of the vehicle(vno>>regdate>>regno>>rc):\n";
            cin>>vno>>regdate>>regno>>rc;
          }
          void display()
          {
            cout<<"vehicle number:"<<vno<<endl;
            cout<<"Registration date:"<<regdate<<endl;
            cout<<"registration number:"<<regno<<endl;
            cout<<"RC Number:"<<rc<<endl;
          }
           friend class maintenence;
};
class car
{
    private:
          string company;
          string fueltype;
          string accident;
    public:
          void read()
          {
            cout<<"Enter the details(company>>fueltype>>accident):\n";
            cin>>company>>fueltype>>accident;
          }
          friend class maintenence;
};
class maintenence
{
    public:
    string type;
    
    void maintain(vehicle &v1,car &c1)
    {
        cout<<"The Vehicle servicing is under work!!!\n";
        cout<<"Vehicle no:"<<v1.vno<<endl;
        cout<<"company:"<<c1.company<<endl;
        cout<<"Accindent status"<<c1.accident<<endl;
    }

};
int main()
{
    vehicle v1;
    car c1;
    maintenence m1;
    v1.readvehicles();
    c1.read();
    m1.maintain(v1,c1);

}