#include<iostream>
#include<vector>
#include<math.h>
// #define long long ll

const int maxn=10000500;
// const long long max=1000000000;
long long  a[maxn];
// long long b[max];
using namespace std;
// void solve(){
        
// }
int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int t;
        cin>>t;
        long long max=-1,maxi;
        for(int i=0;i<t;++i){
                cin>>a[i];

                if(a[i]>max){
                        max=a[i];
                        maxi=i;
                }
        }

        cout<<maxi+1;

        
        return 0;
}