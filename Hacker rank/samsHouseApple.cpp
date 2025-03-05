#include<iostream>
#include<vector>
using namespace std;
void  findcount(int s,int t,int a,int b,int m ,int n,vector<int> apple,vector<int> oranges)
{
    for(int i=0;i<n;i++)
    {

        if(apple[i]>0)
        {
            apple[i]+=a;
        }
    }
vector<int> ora;
     for(int i=0;i<m;i++)
    {

        if(oranges[i]<0)
        {
            ora.push_back(b+ oranges[i]);
        }

    }

    int a_count=0;
    int o_count=0;
    for(int i=0;i<n;i++)
    {
        if(apple[i]>=s && apple[i]<=t)
        {

            a_count++;
        }

    }
    for(int i=0;i<m;i++)
    {
        if(ora[i]<=t && ora[i]>=s )
        {

            o_count++;
        }

    }

cout<<a_count<<endl<<o_count;
}

int main()
{

    vector<int> apple;
    vector<int> oranges;
    int s,t;
    cin>>s>>t;
    int a,b;
    cin>>a>>b;
    int m,n;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {

        int app;
        cin>>app;
        apple.push_back(app);
    }
    for(int j=0;j<m;j++)
    {

        int orange;
        cin>>orange;
        oranges.push_back(orange);
    }

    findcount(s,t,a,b,m,n,apple,oranges);



}
