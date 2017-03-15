#include<iostream>
#include<queue>
using namespace std;
queue<int> s;
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n;
  cin >> n;
  while(n--)
  {
    char a; int b;
    cin >> a;
    if(a == '-')
    {
      cout << s.front() << endl;
      s.pop();
    }
    else
    {
      cin >> b;
      s.push(b);
    }
  }
  return 0;    
}
