#include<iostream>
using namespace std;

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


int main(){
int **arr = new int*[3];
initialize2DArray(arr,3,3,0);
cout<<"Enter your Array : "<<endl;
userInput2DArray(arr,3,3);
int sum =0;

for(int r=0;r<3;r++){
    for(int c=0;c<3;c++){
        sum = sum + arr[r][c];
    }

}
cout<<"Summation of all element is : "<<sum;
}
