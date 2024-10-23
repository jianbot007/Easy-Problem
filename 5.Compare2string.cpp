#include<iostream>
#include<cstring>
using namespace std;

int StringLength(string s){
int k = 0;
while(s[k]){
    k++;
}
return k;
}


bool VowelCheck(string v,char c){
for(int j=0;j<StringLength(v);j++){
if(v[j]==c){
return true;
}
}
return false;
}

int main(){

char S1[200];
cout<<"Enter your String"<<endl;
gets(S1);
char S2[200];
cout<<"Enter your String"<<endl;
gets(S2);

if(strcmp(S1,S2)==0){
    cout<<"Strings are same"<<endl;
}
else {
    cout<<"Not Same"<<endl;
}

return 0;
}
