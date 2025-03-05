/*Create a program for managing real estate property listings using inheritance.
 Design a base class "Property" with attributes like address and price. Derive 
 classes like "House" and "Apartment”. Write a CPP program to ask the user which
 property he/she wants to buy and display the rate of property.*/

 #include<iostream>
 using namespace std;
 class property
 {
    protected:
    string address;
    float price;
    float area;

    public:
    void read()
    {
        cout<<"Enter the details of the property:"<<endl;
        cin>>address>>price>>area;

    }
    void display()
    {
        cout<<"The property details are:";
        cout<<address<<endl<<price<<area<<endl;
    }

 };
 class House: public property
 {
   protected:
   string owner;
   int  bedrooms;
   public:
   void read()
   {
    property::read();
    cout<<"Enter the house information:";
    cin>>owner>>bedrooms;
   }
   void display()
   {
    property::read();
    cout<<"The details are:"<<endl;
    cout<<owner<<bedrooms;
   }

 };
 class Apartemt: public property
 {
   protected:
   string name;
   int  floors;
   public:
   void read()
   {
    property::read();
    cout<<"Enter the Apartent information:";
    cin>>name>>floors;
   }
   void display()
   {
    property::read();
    cout<<"The details are:"<<endl;
    cout<<name<<floors;
   }

 };
 int main()
 {
    Apartemt a;
    House h;
    int x;
    cout<<"Entre the property to buy(1-house,2-Apartment)";
    cin>>x;
    if(x==2)
    {
       a.read();
       a.display();
    }
    else if(x==1)
    {
        h.read();
        h.display();1
    }


 }