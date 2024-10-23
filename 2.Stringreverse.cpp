#include<iostream>
#include<cstring>
using namespace std;


int StringLength(string s)
{
    int i =0;
    while(s[i])
    {
        i++;
    }
    return i;
}






int main()
{

    char S1[200];
    cout<<"Enter your String"<<endl;
    gets(S1);
    cout<<" Reverse of the String is : "<<endl;
    for(int i = StringLength(S1); i>=0; i-- )
    {
        cout<<S1[i];
    }

    return 0;
}
