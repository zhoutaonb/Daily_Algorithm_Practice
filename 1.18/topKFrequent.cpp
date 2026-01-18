class Solution {
    public:
        struct MyCompare{
            bool operator()(pair<int,int> x,pair<int,int> y){
                return x.second>y.second;
            }
        };
        vector<int> topKFrequent(vector<int>& nums, int k) {
            map<int,int> m{};
            for(auto i :nums)
            {
                if(m.find(i)!=m.end())
                {
                    m.find(i)->second++;
                }
                else{
                    m.insert(pair(i,1));
                }
            }
            priority_queue<pair<int,int>,vector<pair<int,int>>,MyCompare> p_q{};
            for(auto i : m)
            {
                p_q.emplace(i);
                if(p_q.size()>k)
                {
                    p_q.pop();
                }
            }
            vector<int> ans{};
            while(p_q.size()!=0)
            {
                ans.push_back(p_q.top().first);
                p_q.pop();
            }
            return ans;
        }
    };