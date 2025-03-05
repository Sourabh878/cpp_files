/*Create a class called Matrix with private data members rows, cols, and elements. Create a 
friend class called MatrixOperations that has functions to add two matrices, multiply two 
matrices, and display a matrix. Display the result of adding and multiplying two matrices in 
the main function.*/
#include<iostream>
using namespace std;
class matrix
{
    private:
    int rows,col;
    int ele[10][10];
    public:
    matrix():rows(0),col(0),ele(){}
    void read()
    {
        cout<<"Enter the rows and col\n";
        cin>>rows>>col;
        int i,j;
        cout<<"Enter the elements";
        for(i=0;i<rows;i++)
        {
            for(j=0;j<col;j++)
            {
                cin>>ele[i][j];
            }

        }
    
    }
    friend class matrixop;
};
class matrixop
{
    public:
    int i=0,j=0,k=0;
    void add(matrix &m1,matrix &m2,matrix &m3)
    {
        for(i=0;i<m1.rows;i++)
        {
            for(j=0;j<m1.col;j++)
            {
                m3.ele[i][j]=m1.ele[i][j]+m2.ele[i][j];
            }
            

        }
         for(i=0;i<m1.rows;i++)
        {
            for(j=0;j<m1.col;j++)
            {
                cout<<m3.ele[i][j];
            }

            cout<<endl;
            

        }

    }
   void mul(matrix &m1,matrix &m2,matrix &m3)
   {
    for(i=0;i<m1.rows;i++)
    {
        for(j=0;j<m2.col;j++)
        {
        m3.ele[i][j]=0;
        for(k=0;k<m1.col;k++)
        {
            m3.ele[i][j]=m3.ele[i][j]+m1.ele[i][k]* m2.ele[k][j];
        }
        }
    }
       for(i=0;i<m1.rows;i++)
        {
            for(j=0;j<m2.col;j++)
            {
                cout<<m3.ele[i][j]<<"\t";
            }
            cout<<endl;
        }

}
};
int main()
{
    matrix m1,m2,m3;
    m1.read();
    m2.read();
    matrixop p,p1;
   // p.add(m1,m2,m3);
    p1.mul(m1,m2,m3);
    return 0;
    
}