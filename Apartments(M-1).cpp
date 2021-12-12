#include<iostream>
#define gap " "
#define endl "\n"
#define ln '\n'
typedef long long ll;
using namespace std;
//Using selection sort to sort both arrays
void SelectionSort(int a[], int n){
    int i,j,Min=0,t=0;
    for(i=0; i<n-1; i++){
        Min = i;
        for(j=i+1; j<n; j++){
            if(a[j]<a[Min]){
                Min = j;
            }
        }
        if(Min!=i){
           t=a[i];
           a[i]=a[Min];
           a[Min]=t;
        }
    }
//    for(i=0; i<n; i++)  cout<<a[i]<<gap;
//    cout<<endl;

}
int main(){
    int n,m,k,i,j,matches=0;
    cin>>n>>m>>k;
    int a[n],b[m];

    for(i=0; i<n; i++)  cin>>a[i];
    for(i=0; i<m; i++)  cin>>b[i];

    SelectionSort(a, n);
    SelectionSort(b, m);

    i=0,j=0;
    while(i<n){
        while(j<m && b[j]<a[i]-k)   j++;
        if(abs(b[j]-a[i])<=k){
            matches++;
            i++, j++;
        }
        else    i++;
    }
    cout<<matches<<endl;
    return 0;
}
