/*You are asked to develop a program for Home-delivery company. The 
company delivers items to different types of customers, like Regular 
customer, Premier customer and New customers. Company offers 
different schemes in delivery charges. Create base class as Customers 
and different types of customers as derived ones. Write a CPP program 
for the above given scenario and display delivery charges.*/
#include<iostream>
using namespace std;
class customer
{
    protected:
                string cname;
                int phone;
                string address;
                string item;
                
    public:
            void read()
            {
                cout<<"Enter the customer Details(cname>>phone>>address>>price>>type)\n";
                cin>>cname>>phone>>address>>item;
            }
            void display()
            {
                cout<<"Customer Name:"<<cname<<endl;
                cout<<"Phone number:"<<phone<<endl;
                cout<<"address:"<<address<<endl;
                cout<<"item:"<<item<<endl;
            }
           

};
class excep
{
    public:
     int num;
     string mssg;
    public:
    excep(int a,string b):num(a),mssg(b){}
    void show_err()
    {
        cout<<num<<mssg;
    }

};
class newcustomer:public customer
{
    protected:
              string offer="The customer will get 20'%' off on first order";
              float price=890;
    public:
           void book()
           {
            customer::read();
           }
           void confirm()
           {
            if(price==NULL)
            {
                throw excep(1,"NOT BOOKED!!");
            }
            else
            {
                throw excep(1,"NOT BOOKED!!");
                cout<<"Booked successfull!!\n";
                customer::display();
                cout<<offer<<endl;
                cout<<"Actual price:"<<price<<endl;
                cout<<"Price After Discount:"<<price-price*0.2<<endl;

            }
           }
    
};
class regularcust:public customer
{
    protected:
              string offer="The customer will get 30'%' off on first order";
             float price=890;
    public:
           void book()
           {
            customer::read();
           }
           void confirm()
           {
            if(price==0dd)
            {
               throw excep(1,"NOT BOOKED!!");
            }
            else
            {
                cout<<"Booked successfull!!\n";
                customer::display();
                cout<<offer<<endl;
                cout<<"Actual price:"<<price<<endl;
                cout<<"Price After Discount:"<<price-price*0.3<<endl;

            }
           }
    
};
class premiumcust:public customer
{
    protected:
              string offer="The customer will get 30'%' off on order with free delivary";
            float price=890;
    public:
           void book()
           {
            customer::read();
           }
           void confirm()
           {
            if(price==NULL)
            {
                throw excep(1,"NOT BOOKED!!");
            }
            else
            {
               throw excep(1,"NOT BOOKED!!");
                cout<<"Booked successfull!!\n";
                customer::display();
                cout<<offer<<endl;
                cout<<"Actual price:"<<price<<endl;
                cout<<"Price After Discount:"<<price-price*0.3<<endl;

            }
           }
    
};
int main()
{
    regularcust r;
    r.book();
    try
    {
       r.confirm();
    }
    catch(excep &e)
    {
        e.show_err();
    }
    
}