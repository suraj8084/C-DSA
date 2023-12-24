#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;

    unsigned long long int ans=0,i=0;
    while(n!=0){
        int bit=!(n&1);
        ans=bit*pow(10,i)+ans;
        i++;
        n=n>>1;
    }
    ans=ans|1;
    cout<<"Answer = "<<ans;
}