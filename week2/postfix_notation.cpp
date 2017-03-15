#include<iostream>
#include<string>
#include<stack>
using namespace std;
stack<int> s;
string in;
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n;
  cin >> n;
  while(n--)
  {
    cin >> in;
    if(in == "-")
    {
      int a = s.top();
      s.pop();
      int b = s.top();
      s.pop();
      s.push(b-a);
    }
    else if(in == "+")
    {
      int a = s.top();
      s.pop();
      int b = s.top();
      s.pop();
      s.push(a+b);
    }
    else if(in == "*")
    {
      int a = s.top();
      s.pop();
      int b = s.top();
      s.pop();
      s.push(a*b);
    }
    else
    {
      s.push(atoi(in.c_str()));
    }
  }
  cout << s.top() << endl; 
  return 0;    
}
