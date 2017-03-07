#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
map<char, pair<int,int> >m;
string a[3];
int ans[3];
int w,h;
int max(int a, int b)
{
  return a > b ? a : b;
}
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  cin >> w >> h;
  string al , bl, cl;
  getline(cin,al);
  pair<int,int> tmp;
  for(int i=0;i<3;i++) ans[i] = 0;
  for(int i=h;i>0;i--)
  {
    //cin >> al;
    getline(cin,al);
    for(int j=1;j<=al.size();j++)
    {
      tmp.first = i;
      tmp.second = j;
      m[al[j-1]] = tmp;
    }
  }
  string s;
  for(int j=0;j<3;j++)
  {
    getline(cin,a[j]);
    getline(cin,s);
    bool f = true;
    while(getline(cin,s) && s != "%TEMPLATE-END%")
    {
      for(int i=0;i<s.size();i++)
      {
        if(m.find(s[i]) != m.end() && s[i] != ' ')
        {
          if(f) 
          {
            f = false;
            tmp = m[s[i]];
          }
          else
          {
            ans[j] += max(abs(m[s[i]].first - tmp.first), abs(m[s[i]].second - tmp.second));
            tmp = m[s[i]];
          }
        }
      }
    }
  }
  int ind=0;
  if(ans[1] < ans[ind]) ind = 1;
  if(ans[2] < ans[ind]) ind = 2;
  cout << a[ind] << endl;
  cout << ans[ind] << endl;
  return 0;    
}
