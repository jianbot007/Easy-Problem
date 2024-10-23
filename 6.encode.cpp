#include<iostream>
#include<cstring>
using namespace std;

int StringLength(string s)
{
    int k = 0;
    while(s[k])
    {
        k++;
    }
    return k;
}

void Encode(string s, int j)
{
    int count=StringLength(s);
    int i = -1;
    while(i<count)
    {
        i=i+j+1;

        if(s[i] != ' ')
        {
            int d =(int) s[i] + 2;
            s[i] = (char)d;
        }


    }
    cout<<s;
}


int main()
{

    char S1[200];
    int n;
    cout<<"Enter your String"<<endl;
    gets(S1);
    cout<<"Enter your integer"<<endl;
    cin>>n;

    Encode(S1,n);

    return 0;
}
