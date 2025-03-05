#include<iostream>
using namespace std;
main()
{
    int array[10];
    cout<<"enter the array elements:\n";
    for(int i=0;i<5;i++)
    {
        cin>>array[i];
    }

    cout<<"the array elements are:\n";
    for(int i=0;i<5;i++)
    {
        cout<<array[i]<<endl;
    }
}
