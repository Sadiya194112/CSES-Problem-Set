#include<iostream>
#include<algorithm>
#include<vector>
#define ln '\n'
using namespace std;

int main(){
    int n,m,k,i,j,matches=0;
    cin>>n>>m>>k;

    vector<int>ap(n);
    vector<int>apt(m);

    for(i=0; i<n; i++)  cin>>ap[i];
    for(i=0; i<m; i++)  cin>>apt[i];

    sort(ap.begin(), ap.end());
    sort(apt.begin(), apt.end());

    i=0,j=0;
    while(i<n){
        while(j<m && apt[j]<ap[i]-k)    j++;
        if(abs(apt[j]-ap[i])<=k){
            matches++;
            i++,j++;
        }
        else i++;
    }
    cout<<matches<<ln;
    return 0;
}
