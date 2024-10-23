#include<iostream>
using namespace std;

void revPrint1DArr(int Arr[], int size){
for(int i=size-1;i>=0;i--){
cout<<" "<<Arr[i];
}
}

int main(){
int arr1[5] = {10,20,30,40,50};
int arr2[8] ={1,2,3,4,5,6,7,8};
int arr3[13];

int j=0;

for(int i=0;i<5;i++){
    arr3[j]=arr1[i];
    j++;
}
for(int i=0;i<8;i++){
    arr3[j]=arr2[i];
j++;
}

cout<<"Merge array in reverse Order :"<<endl;
revPrint1DArr(arr3,j);

return 0;
}
