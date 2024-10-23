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

    int **arr1 = new int* [5];
    cout<<"Enter your 5x4 Array :"<<endl;
    initialize2DArray(arr1,5,4,0);
    userInput2DArray(arr1,5,4);


    int **arr2 = new int* [4];
    initialize2DArray(arr2,4,5,0);
    cout<<"Given Array"<<endl;
    print2DArray(arr1,5,4);

    for(int r=0; r<5; r++)
    {
        for(int c=0; c<4; c++)
        {
            arr2[c][r]=arr1[r][c];
        }

    }
    cout<<"Transpose Matrix : "<<endl;

    print2DArray(arr2,4,5);

}


