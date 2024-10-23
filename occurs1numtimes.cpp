#include<iostream>
using namespace std;

void revPrint1DArr(int Arr[], int size)
{
    for(int i=size-1; i>0; i--)
    {
        cout<<" "<<Arr[i];
    }
}

void Print1DArr(int Arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<" "<<Arr[i];
    }
}
bool check1DarrayForValue(int arr[],int size,int v)
{
    for(int i=0; i<size; i++)
    {
        if (arr[i]==v)
        {
            return true;
        }
    }
    return false;

}


int main()
{

    int arr1[10] = {8,4,6,1,6,9,6,1,9,8};

    int v=6;
    int j=0;

    for(int i=0; i<8; i++)
    {
        if (arr1[i]==v)
        {
            j++;
        }

    }




    cout<<"The number '"<<v<< "' Occurs "<<j<<" times in the array";


    return 0;
}
