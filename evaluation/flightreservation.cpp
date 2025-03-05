/*Create a CPP program to manage airport operations using inheritance. Design a 
base class "Flight" with properties like flight number and departure time. Derive
 classes like "DomesticFlight" and "InternationalFlight." Handle seat reservation
  for passengers and display reserved seats for both type of flights.*/
#include<iostream>
using namespace std;
class Flight
{
    protected:
                int fno;
                string deptime;
                string fname;
                int capacity;

    public:
            void read()
            {
                cout<<"Enter The Fight details:(deptime>>fname>>capacity)"<<endl;
                cin>>deptime>>fname>>capacity;
            }
            void display()
            {
                cout<<"departure:"<<deptime<<endl;
                cout<<"flight name:"<<fname<<endl;
                cout<<"Capacity:"<<capacity<<endl;
            }
            int cap()
            {
                return capacity;
            }

};
class DomesticFlight:public Flight{
    
protected:
       string seat;
       float price;
      static int scount;//declare
public:
      void reservation()
      {
        Flight::read();
        cout<<"Seat& price"<<endl;
        cin>>seat>>price;
        scount++;
      }
      void bookingdetails()
      {
        if(price==NULL)
        {
            throw runtime_error("Flight not booked");
        }
        else
        {
            cout<<"Flight booked successfully and booking details are\n";
            Flight::display();
            cout<<"Seat:"<<seat<<endl;
            cout<<"Price:"<<price<<endl;
        }
      }
      int ret()
      {
        return scount;
      }
};
int DomesticFlight::scount=0;
int main()
{
    DomesticFlight d1,d2,d3;

    d1.reservation();
    d1.bookingdetails();

     d2.reservation();
    d2.bookingdetails();

     d3.reservation();
    d3.bookingdetails();
int p=d3.ret();
cout<<"The number of flights booked:"<<p;

}