#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str ;
    cin>>str;
    int count=0; 
    for(int i=0; i<str.length();i++){
        count +=i;
    }

     if(count%2==1){
            cout<<"IGNORE HIM!"<<endl;
        }
        else{
            cout<<"CHAT WITH HER!"<<endl;
        }

    return 0;
}
