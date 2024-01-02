#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=1,t;
    cin>>t;
    int arr[t];
    for(int i=0; i<t;i++){
        cin>>arr[i];
    }
    for(int i=0; i<t-1;i++){
       
        if (arr[i] != arr[i+1]){
            count++;
        }
    }
        
    cout<<count<<endl;

    return 0;
}