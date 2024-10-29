#include<iostream>
using namespace std;

void PrintArray(char Arr[],int size){
for(int i =0 ; i< size ; i++ ){
    cout<< Arr[i] <<" ";
}
}
void ReverseArray(char Arr[],int size){
    for(int i = size-1 ; i >= 0 ; i-- ){
    cout<< Arr[i] <<" ";
}
}

int main(){
//INput from the user
// put that in a Array
// Reverse new array
string word;

cout<<"Enter your word : \n";
cin>>word;

int Size = word.length();
char CharArr[Size] ;
int z=0;

for(int i =0 ; i< Size ; i++ ){
   CharArr[i] = word[i];
   z++;
}


PrintArray(CharArr,z);
cout<<"Reverse of the word - \n";
ReverseArray(CharArr,z);

}
