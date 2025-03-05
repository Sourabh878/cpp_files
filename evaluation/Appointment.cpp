/*Develop a CPP program for scheduling healthcare appointments using inheritance.
 Design a base class "Appointment" with attributes like date, time, and patient
  name. Derive classes like "DoctorAppointment" and "LabAppointment." Display all 
  the Doctor Appointments and Lab Appointments.
*/
#include<iostream>
using namespace std;
class Appointment
{
    protected:
    string date;
    float time;
    public:
    void read()
    {
        cout<<"Enter The time And date of appointment:"<<endl;
        cin>>date>>time;
    }
    void display()
    {
        cout<<"Date:"<<date<<endl;
        cout<<"Time:"<<time<<endl;
    }

};
class Doctor:public Appointment
{
    protected:
    string Dname;
    int appno;
    string field;
    string Appointent;
    string problem;

    public:
    void read()
    {

        cout<<"Enter The appointment Details(Dname>>appno>>field>>Appointent>>problem):"<<endl;
        cin>>Dname>>appno>>field>>Appointent>>problem;
        Appointment::read();

    }
    void display()
    {
        cout<<"Doctor name:"<<Dname<<endl;
        cout<<"Appoint number:"<<appno<<endl;
        cout<<"Specialist:"<<field<<endl;
        cout<<"Appointent_name:"<<Appointent<<endl;
        cout<<"Problem:"<<problem<<endl;
        Appointment::display();
    }
};
class lab:public Appointment
{
    protected:
    string chemist;
    int sample;
    string field;
    string problem;

    public:
    void read()
    {
        cout<<"Enter The appointment Details(chemist>>sample>>field>>problem):"<<endl;
        cin>>chemist>>sample>>field>>problem;
        Appointment::read();

    }
    void display()
    {
        cout<<"chemist name:"<<chemist<<endl;
        cout<<"sample number:"<<sample<<endl;
        cout<<"Specialist:"<<field<<endl;
        //cout<<"Appointent_name:"<<Appointent<<endl;
        cout<<"Problem:"<<problem<<endl;
        Appointment::display();
    }

};
int main()
{
    Appointment a;
     int c;
    cout<<"book the appontmet(doctor-1,lab-2)";
    cin>>c;
    try{
    if(c!=1||c!=2){
        throw runtime_error("U have entered wrong choice");
    }
    

    if(c==1)
    {
        Doctor d;
        d.read();

        d.display();
    } 
    else if(c==2)
    {
        lab b;
    
        b.read();
        b.display();
    }
    }
   catch(exception &e){
    cout<<e.what()<<endl;
    
   }
}