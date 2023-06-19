/*
8
1 2 10 11 15 20 21 25
110
*/
#include <iostream>
#include <algorithm>
using namespace std;

int bin_search(int a[], int l, int r, int x){
    if(l>r) return -1;
    int m = (l+r)/2;
    if(x == a[m]) return m;
    if(x < a[m])
        bin_search(a, l, m-1, x);
    else
        bin_search(a, m+1, r, x);
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    int x; cin>>x;
    sort(a,a+n);
    for(int k: a) cout<<k<<' ';
    cout<<endl;
    int index = bin_search(a,0,n-1,x);
    if(index != -1) cout<<"Item found at position "<<index+1;
    else cout<<"Item not found";
}
