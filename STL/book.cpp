#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class book
{
    private:
    string title;
    string author;
    string a;
    public:
    void read()
    {     
        cin>>title>>author>>a;
    }
    void dislplay()
    {
        cout<<title<<author<<a<<endl;
    }
    void friend find(book b[],string a);


};
void find(book b[],string a)
{
    int i=0;
    for(i=0;i<4;i++)
    {
        if(b[i].title==a)
        {
            if(b[i].a=="1")
            {
                cout<<"book is available"<<endl;
                exit(0);
            }
            else
            {
                cout<<"Not available"<<endl;
            }
        }
        else
        {
             cout<<"Not available"<<endl;

        }
    }

}
int main()
{
    book b[4];
    int i;
    for(int i=0;i<4;i++)
    {
        cout<<"Enter the book "<<i<<endl;
        b[i].read();
    }
    cout<<"Find the book"<<endl;
    find(b,"geeta");
}
