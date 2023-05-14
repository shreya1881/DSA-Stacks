#include<bits/stdc++.h>
void reverse(vector<char>&s)
{
  stack<char>st;
  for(int i=0; i<s.size(); i++)
  {
    st.push(s[i]);
  }
  s.clear();
  while(!st.empty())
  {
    char ch = st.top();
    st.pop();
    s.push_back(ch);
  }
}
