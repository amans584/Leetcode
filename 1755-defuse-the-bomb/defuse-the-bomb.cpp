class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> ans;
        for(int i=0;i<code.size();i++)
        {
             if(k == 0)ans.push_back(0);
             else if(k > 0)
             {
                 int j = i+1;
                 int val = k;
                 int sum=0;
                 while(val --)
                 {
                      if(j >= code.size())j=0;
                      sum+=code[j];
                      j++;
                 }
                 ans.push_back(sum);
             }else{
                 int j = i-1;
                 int val = abs(k);
                 int sum=0;
               
                 while(val --)
                 {
                    if(j < 0)
                    {
                         j=code.size()-1;
                    }
               
                    sum+=code[j];
                    j--;
                 }
                 ans.push_back(sum);
             }
        }
        return ans;
    }
};