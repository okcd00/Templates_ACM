#include <cstdio>
#include <string>
#include <cstring> 
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int a[120],s[120],l,n,m,v;
int f[10020];
int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&l);
        for(int j=1;j<=l;j++)scanf("%d",a+j),a[j]+=a[j-1];
        fill(s,s+l+1,0);
        for(int j=0;j<l;j++)
            for(int k=j;k<=l;k++)
                s[l-k+j]=max(s[l-k+j],a[l]-a[k]+a[j]);
        for(int j=m;j;j--){
            int mx=min(j,l);
            for(int k=1;k<=mx;++k)f[j]=max(f[j],f[j-k]+s[k]);
        }
    }
    printf("%d\n",f[m]);
    return 0;
}
