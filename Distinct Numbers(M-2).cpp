#include<iostream>
#define gap " "
#define endl "\n"
using namespace std;
const int N=2e5+5;
int hsh[N];
int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
        hsh[a[i]]++;
    }
    int c=0;
    for(i=0; i<n; i++){
        if(hsh[i]==0)   continue;
        c++;
//        cout<<hsh[i]<<gap;
    }
    cout<<c<<endl;
    return 0;
}
