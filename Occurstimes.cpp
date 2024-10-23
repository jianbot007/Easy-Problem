#include<iostream>
using namespace std;


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
int times(int arr[],int s,int v){
int z=0;
for(int i=0; i<s; i++)
    {
        if (arr[i]==v)
        {
            z++;
        }
    }
return z;
}


int main()
{

int arr1[20] ={7,7,4,6,1,6,9,1,888,8888,8,6,8,2,88,8,3,8,9,5};
int arr3[20];
int j=0;

for(int i=0;i<20;i++){
        if(!check1DarrayForValue(arr3,20,arr1[i])){
   arr3[j]=arr1[i];
   j++;
        }
}


for(int i=0;i<j;i++){
    cout<<arr3[i]<<" occurs "<<times(arr1,20,arr3[i])<<" times."<<endl;
}
    return 0;
}
