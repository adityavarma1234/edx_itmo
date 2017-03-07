#include<iostream>
using namespace std;

int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int a,b,c;
  cin >> a >> b >> c;
  cout.precision(8);
  cout << (a+b+c)/6.0 << endl;
  //printf("%.8LF\n",(long double)(a+b+c)/6.0);
  return 0;    
}
