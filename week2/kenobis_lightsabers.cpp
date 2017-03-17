#include<iostream>
#include<string>
using namespace std;
struct dll{
  int val;
  struct dll *prev;
  struct dll *next;
};
struct dll *mid, *start, *last;
int curr_size = 0;
void add_to_last(int num)
{
  dll *tmp ;
  tmp = (dll*)malloc(sizeof(dll));
  tmp->prev = last;
  tmp->next = NULL;
  tmp->val = num;
  if(last) last->next = tmp;
  last = tmp;
  curr_size++;
  if(curr_size%2 == 0)
    mid = mid -> next;
  if(mid == NULL)
    mid = last;
  if(start == NULL)
    start = last;
}
void mum()
{
  if(curr_size == 1 || curr_size == 0)
    return;
  dll *tmp = last;
  tmp->next = start;
  start->prev = tmp;
  tmp = mid;
  if(curr_size%2==1)
    mid = last;
  else 
    mid = start;
  start = tmp;
  last = tmp->prev;
  last->next = NULL;
  tmp->prev = NULL;
}
void poplast()
{
  dll *tmp;
  if(curr_size == 1)
  {
    free(start);
    start = NULL;
    last = NULL;
    mid = NULL;
    curr_size--;
    return;
  }
  if(curr_size == 2)
  {
    free(last);
    mid = start;
    last = start;
    start->next = NULL;
    curr_size--;
    return;
  }
  if(curr_size %2 == 1)
  {
    tmp = last;
    last = last->prev;
    last->next = NULL;
    free(tmp);
    curr_size--;
    return;
  }
  tmp = last;
  last = last->prev;
  last->next = NULL;
  mid = mid->prev;
  free(tmp);
  curr_size--;
}
void print()
{
  dll *tmp;
  tmp = start;
  int cnt = 0;
  while(tmp)
  {
    tmp = tmp->next;
    cnt++;
  }
  //cout << cnt << endl;
  printf("%d\n",cnt);
  while(start)
  {
    //cout << start->val << ' ' ;
    printf("%d ",start->val);
    start = start->next;
  }
  //cout << endl;
  printf("\n");
}
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n;
  cin >> n;
  start = NULL;
  mid = NULL;
  last = NULL;
  while(n--)
  {
    string in;
    cin >> in;
    if(in == "add")
    {
      int num;
      cin >> num;
      add_to_last(num);
    }
    else if(in == "take")
    {
      poplast();
    }
    else if(in == "mum!")
    {
      mum();
    }
  }
  print();
  return 0;    
}
