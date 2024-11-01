#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter Range Number"<<endl;
cin>>a>>b;
for(int i=a;;i++){
int m=0;
int square=0;
int n = i;
while(n != 0){
int digit = n%10;
square = digit*digit*digit*digit;
m = m + square;
n = n/10;
}
if (m == i){
cout<<i<<endl;
}
}
return 0;
 }
