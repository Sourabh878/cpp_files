#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class File
{
    private:
    string content;
    string buffer;
    public:
        void read_content()
        {
            cout<<"Enter What you have to write into the file"<<endl;
            cin>>content;
            //cout<<endl;
        }
        void readfile(string &filename)
        {
            ifstream inFile(filename);

            if(inFile.is_open())
            {
                while(getline(inFile,buffer))
                {
                    cout<<buffer;
                }
               
            }
            else
            {
                 throw runtime_error("Can not Open The file");
            }
            inFile.close();

        }
        void writefile(string &filename)
        {
            ofstream outFile(filename);

            if(outFile.is_open())
            {
                 outFile << content;
            }
            else
            {
                throw runtime_error("Can not Open The file");
            }
            outFile.close();
        }

};
int main()
{
    string filename="example.txt";
    int x;
    cout<<"1 for reading and 2 for writing"<<endl;
    cin>>x;
    File f;
    try
    {
        if(x==1)
    {
        f.readfile(filename);

    }
    else
    {
        f.read_content();
        f.writefile(filename);

    }

    }
    catch(exception& e)
    {
       cout << e.what() << '\n';
    }
    
    
}