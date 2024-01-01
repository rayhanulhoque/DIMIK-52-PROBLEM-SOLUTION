#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  s,t;
    cin>>s;
    for (int i=0; i <s;i++){
        cin>>t;

int last;
       last=t%10;
            t=t/10000;

        cout<<"Sum "<< "= "<<last+t<<endl;
    }

    return 0;
}
