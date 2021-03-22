#include <iostream>
using namespace std;

int main() {
int sec, min, num;
scanf("%d", &sec);
min=sec/60;
num=sec-min*60;
printf("%d %d", min, num);// your code here

	return 0;
}
