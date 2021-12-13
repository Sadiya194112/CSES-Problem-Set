#include<iostream>
#define gap " "
#define endl '\n'
using namespace std;
//Both arrays are sorted using merge sort
void Merge(int a[], int l, int mid, int r){
    int i=0,j=0,k=0,s=l+r+1;
    i=l;
    j=mid+1;
    k=l;
    int b[s];
    while(i<=mid && j<=r){
        if(a[i]<=a[j]){
            b[k]=a[i];
            i++;
        }
        else{
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=r){
            b[k]=a[j];
            j++,k++;
        }
    }
    else{
        while(i<=mid){
            b[k]=a[i];
            i++,k++;
        }
    }
    for(k=l; k<=r; k++){
        a[k]=b[k];
    }
}
void MergeSort(int a[], int l, int r){
    int mid=0;
    if(l<r){
        mid=(l+r)/2;
        MergeSort(a, l, mid);
        MergeSort(a, mid+1, r);
        Merge(a, l, mid, r);
    }
}
int main(){
    int n,m,d,i,j,l=0,matches=0;
    cin>>n>>m>>d;
    int a[n],b[m];
    for(i=0; i<n; i++)  cin>>a[i];
    for(i=0; i<m; i++)  cin>>b[i];

    MergeSort(a, l, n-1);
//    for(i=0; i<n; i++)  cout<<a[i]<<gap;
//    cout<<endl;
    MergeSort(b, l, m-1);
//    for(i=0; i<m; i++)  cout<<b[i]<<gap;
    i=0,j=0;
    while(i<n){
        while(j<m && b[j]<(a[i]-d))   j++;
        if(abs(b[j]-a[i])<=d){
            matches++;
            i++;
            j++;
        }
        else    i++;
    }
    cout<<matches<<endl;
    return 0;
}
