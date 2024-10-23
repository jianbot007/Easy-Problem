#include<iostream>
using namespace std;

void initialize1DArray(int *arr,int size,int v)
{
    for(int i=0; i<size; i++)
    {
        arr[i] = v;
    }
}

void print1DArray(int *arr,int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void initialize2DArray(int **arr,int Row,int Col,int v)
{
    for(int i=0; i<Row; i++)
    {
        arr[i] = new int [Col];
    }

    for(int i=0; i<Row; i++)
    {
        for(int j=0; j<Col; j++)
        {
            arr[i][j] = v;
        }
    }
}


void userInput2DArray(int **arr,int Row,int Col)
{
    for(int i=0; i<Row; i++)
    {
        for(int j=0; j<Col; j++)
        {
            cin>>arr[i][j];
        }
    }
}

void print2DArray(int **arr,int Row,int Col)
{
    for(int i=0; i<Row; i++)
    {
        for(int j=0; j<Col; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}



int main()
{

    int **arr1 = new int* [3];
    initialize2DArray(arr1,3,3,0);
    cout<<"Enter your First 3x3 Array :"<<endl;
    userInput2DArray(arr1,3,3);

    int **arr2 = new int* [3];
    initialize2DArray(arr2,3,3,0);
    cout<<"Enter your Second 3x3 Array :"<<endl;
    userInput2DArray(arr2,3,3);

    int **arr3 = new int* [3];
   initialize2DArray(arr3,3,3,0);

    int i,r,c,sum;

for(i=0;i<3;i++)
{
for(r=0;r<3;r++)
{
sum=0;
for(c=0;c<3;c++)
{
sum =sum + arr1[i][c]*arr2[c][r];
}
arr3[i][r] = sum;
}
}

cout<<"Multiplication : "<<endl;

print2DArray(arr3,3,3);

}
