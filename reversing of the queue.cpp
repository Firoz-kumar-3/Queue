queue<long long int> rev(queue<long long int> q)
{
    // add code here.
  //  queue<long long int>temp;
    stack<long long int> s;
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
   return q; 
    
}
