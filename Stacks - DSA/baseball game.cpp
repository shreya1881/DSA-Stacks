class Solution {
public:
    int calPoints(vector<string>& operations) {
       stack<int>st1;
       for(int i=0; i<operations.size(); i++)
       {
           if(operations[i]!="C" && operations[i]!="D" && operations[i]!="+")
           {
           st1.push(stoi(operations[i]));
           }

           else if(operations[i]=="C")
           {
           st1.pop();
           }

           else if(operations[i]=="D")
           {
           st1.push(2*st1.top());
           }

           else if(operations[i]=="+")
           {
            int sum=0;
            int a = st1.top();
            sum+=a;
            st1.pop();
            int b = st1.top();
            sum+=b;
            st1.push(a);
            st1.push(sum);
           }
       }
       int fsum=0;
       while(!st1.empty())
       {
           int b = st1.top();
           fsum+=b;
           st1.pop();
       }
       return fsum;
    }
};
