#include<iostream>
using namespace std;

void revPrint1DArr(int Arr[], int size){
for(int i=size-1;i>0;i--){
cout<<" "<<Arr[i];}}

void Print1DArr(int Arr[], int size){
for(int i=0;i<size;i++){
cout<<" "<<Arr[i];
}
}
bool check1DarrayForValue(int arr[],int size,int v){
for(int i=0;i<size;i++){
if (arr[i]==v){return true;}}
return false;

}


int main(){

int arr1[7] ={1,4,6,3,6,9,1};

int arr3[7];

int j=0;

for(int i=0;i<7;i++){
        if(!check1DarrayForValue(arr3,7,arr1[i])){
   arr3[j]=arr1[i];
   j++;
        }
}


if(j==7){
cout<<"Its already Unique"<<endl;
}
else{
cout<<"Unique array : " <<endl;
Print1DArr(arr3,j);
}

return 0;
}
