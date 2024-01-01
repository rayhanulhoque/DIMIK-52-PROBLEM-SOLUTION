#include<bits/stdc++.h>
using namespace std;
vector <int >arr;
int main(){
    int t,m;
    cin>>t;
    for (int i=1;i<=t;i++){

        for (int j=0;j<3;j++){
            cin>>m;
        arr.push_back(m);
        }
        sort(arr.begin(),arr.end());
        cout <<"Case"<<" "<<i<<":";
        for(int j=0;j<arr.size();j++){
            cout<<" "<<arr[j];
        }
        cout <<endl;
        arr.clear();


    }
    return 0;
}
