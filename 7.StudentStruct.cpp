#include<iostream>
#include<string.h>
using namespace std;


struct Student{
int id;
string name ;
double cgpa ;
char gender ;
int creditCompleted ;
string department ;
bool checkProbation(){
if (cgpa<2.5){
    return true;
}
else {
    return false;
}
}
 };
int main(){

Student s[5];

s[0] = {111,"Kazi Mahfuzur Rahman",3.9,'M',31,"CSE"};
s[1] = {222,"Atif Ayan",3.5,'M',15,"BBA"};
s[2] = {321,"Hisham ahmed",2.4,'M',18,"CSE"};
s[3] = {234,"Rashed Islam",2.1,'M',30,"CSE"};
s[4] = {432,"Sadia Islam",2.44,'F',60,"English"};

cout<<"Probation Students List : "<<endl;
for(int i = 0;i<5;i++){
    if(s[i].checkProbation()){
        cout<<"ID : "<<s[i].id<<"\tName : "<<s[i].name<<endl;
    }
}

return 0 ;
}
