class Solution {
public:
    string reorganizeString(string s) {
        
        map<char,int> mp;
        priority_queue<pair<int,char>> pq;
        string res = "";
        
        for(auto it : s) {
            mp[it]++;
        }
        
        for(auto it : mp) {
            pq.push(make_pair(it.second,it.first));
        }
        
        while(pq.size()>1) {
            
            auto top1 = pq.top();
            pq.pop();
            
            auto top2 = pq.top();
            pq.pop();
            
            if(top1.first >0) res+=top1.second;
            if(top2.first >0) res+=top2.second;
            
            top1.first--;
            top2.first--;
            
            if(top1.first>0) pq.push(top1);
            if(top2.first>0) pq.push(top2);
        }
        
        if(!pq.empty()) {
            if(pq.top().first >1) return "";
            else res += pq.top().second;
        }
        return res;
    }
};