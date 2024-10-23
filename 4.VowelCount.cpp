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



int VowelCheck(string v,char c)
{
  int z = 0;
    for(int j=0; j<StringLength(v); j++)
    {
        if(v[j]==c)
        {
            z++;
        }

    }

    return z;
}




int main()
{
    int V=0;
    char vowel[10]= {'a','e','i','o','u','A','E','I','O','U'};

    char S1[200];
    cout<<"Enter your String"<<endl;
    gets(S1);

    for(int i=0; i<10; i++)
    {
        V= V + VowelCheck(S1,vowel[i]);

    }

    cout<<"Vowels appeared "<<V<<" times."<<endl;
    return 0;
}
