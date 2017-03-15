#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
stack<int> s;
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n;
  //cin >> n;
  scanf("%d\n",&n);
  //printf("%d\n", n);
  while(n--)
  {
    char a; int b;
    //cin >> a;
    scanf("%c", &a);
    //printf("%c\n", a);
    if(a == '-')
    {
      //cout << s.top() << "\n";
      int x = s.top();
      printf("%d\n",x);
      s.pop();
      scanf("%c", &a);
    }
    else
    {
      //cin >> b;
      scanf("%d\n",&b);
      //printf("%d\n", b);
      s.push(b);
    }
  }
  return 0;    
}
