#include<iostream>
#include<string>
#include<stack>
using namespace std;
string in;
stack<char> s;
void printans()
{
  while(!s.empty()) s.pop(); 
  int i, n = in.size();
  for(i=0;i<n;i++)
  {
    if(in[i] == ')')
    {
      if(!s.empty() && s.top() == '(') s.pop();
      else
      {
        cout << "NO" << endl;
        return;
      }
    }
    else if (in[i] == ']')
    {
      if(!s.empty() && s.top() == '[') s.pop();
      else 
      {
        cout << "NO" << endl;
        return;
      }
    }
    else
      s.push(in[i]);
  }
  if(s.empty())
  cout << "YES" << endl;
  else 
        cout << "NO" << endl;
}
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n;
  cin >> n;
  while(n--)
  {
    cin >> in;
    //cout << in << endl;
    printans();
  }
  return 0;    
}
