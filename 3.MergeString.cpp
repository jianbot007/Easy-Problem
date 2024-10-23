#include<iostream>
#include<cstring>
using namespace std;





int main(){



char S1[200];
cout<<"Enter your 1st String"<<endl;
gets(S1);
char S2[200];
cout<<"Enter your 2nd String"<<endl;
gets(S2);


strcat(S1,S2);
cout<<"Merge of two string : "<<endl;
cout<<S1;

return 0;
}
