#include<iostream>
#define gap " "
#define endl "\n"
#include<set>
using namespace std;
int main(){
    int n,i,x;
    cin>>n;
    //Using set
    set<int>s;
    for(i=0; i<n; i++){
        cin>>x;
        s.insert(x);
    }
    cout<<s.size()<<endl;

    return 0;
}
