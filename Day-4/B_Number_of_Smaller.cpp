#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int n, m; 
    cin>>n>>m;

    int a[n], b[m]; 

    for(int i=0; i<n; i++) cin>>a[i]; 
    for(int i=0; i<m; i++) cin>>b[i];

    int i = 0, j = 0;
    int ans = 0; 
    while(j<m){
        while(a[i] < b[j] and i < n){
            ans++;
            i++;
        }
        j++;
        cout<<ans<<" ";
    } 
    cout<<endl;

    return 0; 
}