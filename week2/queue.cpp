#include<iostream>
#include<queue>
using namespace std;
queue<int> s;
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n;
  //cin >> n;
  scanf("%d\n",&n);
  while(n--)
  {
    char a; int b;
    //cin >> a;
    scanf("%c",&a);
    if(a == '-')
    {
      //cout << s.front() << endl;
      printf("%d\n",s.front());
      scanf("%c",&a);
      s.pop();
    }
    else
    {
      //cin >> b;
      scanf("%d\n",&b);
      s.push(b);
    }
  }
  return 0;    
}
