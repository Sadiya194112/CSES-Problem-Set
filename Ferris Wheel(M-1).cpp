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
    int n,x,i,c=0,j,l=0;
    cin>>n>>x;
    int a[n];
    for(i=0; i<n; i++)  cin>>a[i];

    MergeSort(a, l, n-1);
//    for(i=0; i<n; i++)  cout<<a[i]<<gap;
//    cout<<endl;
    i=0,j=n-1;
    while(i<=j){
        if(a[i]+a[j]<=x)    i++,j--,c++;
        else{
            j--,c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
