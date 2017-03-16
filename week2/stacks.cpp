#include<iostream>
#include<set>
using namespace std;
set<pair<int, int> > s;
set<pair<int, int> >::iterator it;
pair<int,int>p;
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n;
  cin >> n;
  int cnt =1;
  while(n--)
  {
    int b;
    cin >> b;
    if(s.empty())
    {
      p.first = 1;
      p.second = cnt;
      s.insert(p);
      cnt++;
    }
    else if(b != 0)
    {
      p.first = 1;
      p.second = cnt;
      s.insert(p);
      cnt++;
    }
    else if(b==0)
    {
      it = s.begin();
      int x = it->first;
      int y = it->second;
      s.erase(it);
      x++;
      p.first = x;
      p.second = y;
      s.insert(p);
    }
  }
  cout << s.rbegin()->first << endl;
  return 0;    
}
