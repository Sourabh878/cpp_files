#include<iostream>
#include<string>
using namespace std;

class team {//base class
protected:
    int id;
    int size;
    string lname;
    static int count;//declare

public:
  //  team() : id(0), size(0), lname("") {}
  team()
  {
    id=0;                 //default constructor
    size=0;
    lname="";
    count++;
  }

    team(int a, int b, string c) : id(a), size(b), lname(c) {}//parameterized

    void getdetails() {
        cout << "Enter the team details:\n";
        cin >> id >> size;
       cin>>lname;
    }

    void print() {
        cout << "The details are:\n";
        cout << id << endl << size << endl << lname << endl;
    }

};

class players : public team {//derived class
    int pid;

public:
    string pname;
    int score;

    players() : pid(0), pname(""), score(0) {}
    players(int a, string b, int c) : pid(a), pname(b), score(c) {}

    void getdetails() {
        team::getdetails();//invoke the function of team
        cout << "Enter the player details:\n";
        cin >> pid >> pname >> score;
    }

    void print() {
       // team::print();
       // cout << pid << endl << pname << endl << score << endl;
        cout<<"The No of Object Created is"<<count;
    }
    //void prints{ 
    //    cout<<count;
    //    }
};
int team::count=0;//define

int main() {
    int i=0;
   /* players p1[5];
    for( i=1;i<6;i++)
    {
    cout<<"Enter The Details of"<<i<<"th"<<"Player";
     p1[i].getdetails();
    }

 for( i=0;i<5;i++)
  p1[i].print();*/
  players p1,p2,p3,p4;
 // p1.getdetails();
 // p1.print();
 p4.print();
    return 0;
}
