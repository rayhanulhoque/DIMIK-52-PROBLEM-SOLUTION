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
          char n[101];
          cin>>n;
          int length=strlen(n);
          int last_digit=n[length-1]-48;

        add_even(last_digit);
      }

}

