#include<iostream>
#include<memory>
using namespace std;
void fun()
{
    //unique_ptr<int[]> p(new int[5]);   //*p is the content of the pointer
       //p is the pointer pointing to the first allocated block
       int *p=nullptr;
       p=new(int[10]);
    if(p==nullptr)
    {
      throw runtime_error("Memory not have been allocated");
    }
    else
    {
        for(int i=0;i<5;i++)
        {
            cout<<"Enter the string\n";
            cin>>p[i];
        }
        for(int i=0;i<5;i++)
        {
            cout<<"The strings are:\n"<<p[i]<<endl;
            
            
        }

      // delete[ ] p;//free u the space after filling

    }
    

}
int main()
{
    try
    {
        fun();

    }
    catch(exception &e)
    {
        cout<<e.what();
    }
}