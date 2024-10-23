#include<iostream>
#include<string.h>
using namespace std;
int main(){
char s[200];
int i=0;
cout<<"Enter your String"<<endl;
gets(s);
while(s[i]){
    i++;
}

cout<<"Length of the String is "<<i<<endl;

    return 0;
}
