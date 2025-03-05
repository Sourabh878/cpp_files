#include<iostream>
using namespace std;
int main()
{
    int score[9]={10,5,20,20,4,5,2,25,1};
    int min[9];
    int max[9];
    min[0]=score[0];
    max[0]=score[0];
    int min_count[9];
    int max_count[9];


    for(int i=1;i<9;i++)
    {
       if(min[i-1]>score[i])
       {
           min[i]=score[i];

           max[i]=max[i-1];

       }
       else
       {
           min[i]=min[i-1];
           if(score[i]>max[i-1])
           {
                max[i]=score[i];
           }
           else
           {
               max[i]=max[i-1];
           }

       }
    }

    int ar[9];
    ar[0]=min[0];

    for(int i=0;i<9;i++)
    {
        int count=0;
        int j=0;
        for( ;j<9;j++)
        {
            if(ar[j]==min[i])
            {
               count++;
            }

        }
        if(count<=1)
        {
            ar[j]=min[i];
        }


    }
    for(int i=0;i<9;i++)
    {
        cout<<min[i]<<"\t"<<max[i]<<endl;
        cout<<endl;
        cout<<ar[i]<<endl;

    }
}
