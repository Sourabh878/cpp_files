#include<iostream>
#include<vector>
using namespace std;

void fun(vector<int> &a)
{
    vector<int> vec1;

    for (int i = 0; i<a.size(); i++)
     {
         if(a[i]<38 )
            {
                vec1.push_back(a[i]);
            }
            else
            {
                    int p = ((a[i] / 5)+1)*5;

                    if((p-a[i])<3)
                    {
                         vec1.push_back(p);

                    }
                    else if((a[i]-p)== 0)
                    {
                        vec1.push_back(a[i]);
                    }
                    else
                    {
                        vec1.push_back(a[i]);
                    }

            }

    }

    for(int i=0;i<vec1.size();i++)
    {
        cout<<vec1[i]<<endl;
    }



}
int main()
{
    vector<int> b;
    int n;
    cin >> n;
    int c;
     // Resize the vector to hold `n` elements

    for (int i = 0;i<n; i++)
        {

           cin>>c;
           b.push_back(c);  // Read elements into the vector
        }

    fun(b);  // Call the function
    return 0;
}


