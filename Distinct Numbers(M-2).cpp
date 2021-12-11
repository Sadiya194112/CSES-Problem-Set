#include<iostream>
#include<map>
#define gap " "
#define endl "\n"
using namespace std;
map<int, int>mp;
map<int, int>::iterator it;

int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
        mp[a[i]]++;
    }

//    for(it=mp.begin(); it!=mp.end(); it++)
//        cout<<it->first<<gap<<it->second<<endl;
    cout<<mp.size()<<endl;

    return 0;
}
