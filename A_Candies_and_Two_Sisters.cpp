#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<(n/2)-1<<"\n";
        }
        else{
            cout<<n/2<<"\n";
        }
    }
    return 0;
}