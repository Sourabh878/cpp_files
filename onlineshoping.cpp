#include<iostream>
using namespace std;
class product{
    protected:
      int pid;
      float wait;
      string catogory;
      string date;
      float cost;
      static int pcount;//declare


    public:
    product():pid(0),wait(0),catogory(""),date(""),cost(0){}//default constructor

    product(int p,float q,string r,string s,float t):pid(p),wait(q),catogory(r),date(s),cost(t){}//parameterized

     void pdetails() 
     {
        cout<<"Enter the product information"<<endl;
        cin>> pid >> wait >> catogory >> date >> cost;
     }
     void print()
     {
        cout<<"\nThe Product details are:"<<endl;
        cout<<"Product id="<< pid<<endl;
        cout<<"Product wait="<< wait<<endl;
        cout<<"Catogory(electonics,books,cloths)="<<catogory<<endl;
        cout<<"Purchase date="<<date<<endl;
        cout<<"Cost="<<cost<<endl;
     }
     ~product(){}//distructor

};
int product::pcount=0;
class book:public product{
    string bname;
    string author;
    int edition;
    static int bcount;
    string publication;
   
    public:
    book():product(),bname(""),author(""),edition(0),publication(""){}
    book(string a,string b,int c,string d, int p,float q,string r,string s,float t):product(p,q,r,s,t),bname(a),author(b),edition(c),publication(d){}
    void pdetails()
    {
        
        cout<<"Enter the book info:\n";
        cin>>bname>>author>>edition>>publication;
        product::pdetails();
    }
    void print()
    {
        cout<<"The book details are:"<<endl;
        cout<<"The Book name:"<<bname<<endl;
        cout<<"Author:"<<author<<endl;
        cout<<"Edition:"<<edition<<endl;
        cout<<"Publication:"<<publication<<endl;
        product::print();
        bcount++;

    }
   static void count()
    {
        cout<<"The total No. of book purchased:"<<bcount;
    }
    ~book(){}

};
int book::bcount=0;

class clothing:public product{
string type;
string brand;
int size;
public:
void pdetails()
{
    cout<<"Enter the clothe details:";
    cin>>type>>brand>>size;
    product::pdetails();

}
void print()
{
    cout<<"type:"<<type<<endl;
    cout<<"brand:"<<brand<<endl;
    cout<<"Size:"<<size<<endl;
    product::print();
    


    }
};
int main()
{
    int c=0;
    
    do
    {
        cout<<"1.book\n"<<"2.cloth\n"<<"Enter the choice:\n";
        cin>>c;
        switch(c)
        {
            case 1:
                 {book b1;
                  b1.pdetails();
                  b1.print();
                  break;
                 }
            case 2:
                  {clothing c1;
                  c1.pdetails();
                  c1.print();
                  break;
                  }
            default:cout<<"Invalid choice";
        };
     
    }while(c<3);
}

