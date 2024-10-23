#include<iostream>
using namespace std;

int BinarySearch(int Arr[],int L,int R,int key){
int mid = (L+R)/2;
if (R<L){return -1;}
if (key == Arr[mid]){return mid;}
if (Arr[mid]>key){return BinarySearch( Arr, L, mid-1,key);}
if (Arr[mid]<key){return BinarySearch(Arr,mid+1,R, key);}


}


int main(){

int Arr4[9] = {1,2,3,4,5,6,7,8,9};
int n = 9;
int key = 9 ;

cout<<BinarySearch(Arr4,0,n-1,key);

}
