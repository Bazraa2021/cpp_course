#include <iostream>
using namespace std;

int main() {
	
int a,b,c,d,s=0;
cin>>a>>b>>c>>d>>s;
if(a>80) s=s+a;
else if(a<80) s=s+0;
if(b>80) s=s+b;
else if(b<80) s=s+0;
if(c>80) s=s+c;
else if(c<80) s=s+0;
if(d>80) s=s+d;
else if(d<80) s=s+0;
cout<<s;	// your code here

	return 0;
}
