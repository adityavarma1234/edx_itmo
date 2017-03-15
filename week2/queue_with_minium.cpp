#include<iostream>
#include<queue>
#include<deque>
using namespace std;
queue<int> q;
deque<int> dq;
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n;
  scanf("%d\n", &n);
  while(n--)
  {
    char a; int b;
    scanf("%c", &a);
    if(a=='-')
    {
      if(q.front() == dq.front())
        dq.pop_front();
      q.pop();
      scanf("%c",&a);
    }
    else if(a == '?')
    {
      printf("%d\n", dq.front());
      scanf("%c",&a);
    }
    else 
    {
      scanf("%d\n",&b);
      q.push(b);
      while(!dq.empty() && b < dq.back()) dq.pop_back();
      dq.push_back(b);
    }
  }
  return 0;    
}
