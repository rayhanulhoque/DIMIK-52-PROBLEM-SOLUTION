#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    cin>>str;
    for(int i=0; i<str.length(); i++)
    {
        if(i==0)
        {
            str[i]=toupper(str[i]);
        }
    }
    cout<<str;



    return 0;
}