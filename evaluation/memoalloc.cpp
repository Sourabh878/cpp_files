#include<iostream>
using namespace std;
class memo
{
    private:
    int *p;
    public:
    void memalloc()
    {
        p=new(int[10]);

        if(p==nullptr)
        {
            throw runtime_error("Memory not allocated");
        }
        else
        {
            int i=0;
            for(i=0;i<5;i++)
            {
                cin>>p[i];2
            }
        
        }
    }
    void display()
    {
        int i;
        for(i=0;i<5;i++)
            {
                cout<<p[i];
            }
    }
};
int main()
{
    memo m;
    m.memalloc();
    m.display();
}