#include<iostream>
using namespace std;
//multiple catch blocks
class Quotient{
    public:
void getQuotient(){
    int num1,num2;
    int result;

    cout<<"Enter num1 and num2"<<endl;

    cin>>num1>>num2;

        if(num2==0)
            throw num2;   //exception1

        else if(num2<0)
            throw "Enter +ve and non zero value for num2"; //exception2

        result=num1/num2;
            cout<<"result"<<":"<<result<<endl;
  }
};