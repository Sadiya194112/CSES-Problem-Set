#include<iostream>
#define gap " "
#define endl "\n"
using namespace std;
int main(){
    int n,i,j,Min=0,t=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)  cin>>a[i];
    //Using selection sort to sort the elements
    for(i=0; i<n-1; i++){       //For passes
        Min = i;
        for(j=i+1; j<n; j++){   //Find out minimum element
            if(a[j]<a[Min])
                Min = j;
        }
        if(Min!=i){
            //To swap
            t = a[i];
            a[i] = a[Min];
            a[Min] = t;
        }
    }
//    for(i=0; i<n; i++)  cout<<a[i]<<gap;
//    cout<<endl;

    //To remove duplicates
    int m = n;
    int ar[m];
    j=0;
    //Traverse an array
    for(i=0; i<n-1; i++){
        //if value present in i and i+1 is not equal
        if(a[i] != a[i+1]){
            ar[j++] = a[i];
        }
        else m--;
    }
    //Last element of an array
    ar[j++] = a[n-1];

//    for(i=0; i<m; i++)  cout<<ar[i]<<gap;
//    cout<<endl;

    int c=0;
    for(i=0; i<m; i++)  c++;
    cout<<c<<endl;

    return 0;
}
