#include <iostream>
using namespace std;

int main() {
	
int a, b, c, d;
cin>>a;
d=a/3600;
b=a/60%60;
c=a%60;
cout<<d<<" "<<b<<" "<<c<<endl;	// your code here

	return 0;
}
