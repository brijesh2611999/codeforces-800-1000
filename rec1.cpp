#include<bits/stdc++.h>

using namespace std;
void printrev(int n){
   if(n==0){
    return ;
   }
   int x;
   cin>>x;
   printrev(n-1);
   cout<<x<<" ";

}

int main(){
    int n;
    cin>>n;
    printrev(n);
}