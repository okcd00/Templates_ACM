#include <cmath> 
#include <cctype>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
int a[10]={0};
#define Max(a,b) ((a)>(b)?(a):(b))
#define Min(a,b) ((a)<(b)?(a):(b))

bool cmp(const int a, const int b)
{
	return a > b;
}

struct point
{
	int x,y;
} p[10];

int main()
{
	int t,f=1,cnt=0;	
	for(int i=0;i<8;i+=2)
	{
		scanf("%d%d%d%d",&p[i].x,	&p[i].y,
						 &p[i+1].x, &p[i+1].y);
		if     (p[i].x==p[i+1].x) cnt+=1;
		else if(p[i].y==p[i+1].y) cnt+=10;
		else f=0;
	}
	if(cnt!=22) f=0;
	for(int i=0;i<8;i++)
		for(int j=0;j<8;j++)
			if(p[i].x==p[j].x&&p[i].y==p[j].y) a[i]++;
    for(int i=0;i<8;i++) if(a[i]!=2) f=0;
	cout<<(f?"YES":"NO");
	return 0;
}
