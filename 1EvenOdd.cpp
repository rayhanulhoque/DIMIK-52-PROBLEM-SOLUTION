#include<bits/stdc++.h>
using namespace std;
void add_even(int n){

    if(n%2==0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
}
int main(){
int t;
cin>>t;
      while(t--){
          int n ;
          cin>>n;
        add_even(n);
      }

}

