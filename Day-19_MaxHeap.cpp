/*
621. Task Scheduler
You are given an array of CPU tasks, each represented by letters A to Z, and a cooling time, n. Each cycle or interval allows the completion of one task. Tasks can be completed in any order, but there's a constraint: identical tasks must be separated by at least n intervals due to cooling time.

​Return the minimum number of intervals required to complete all tasks.
*/
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>v(26, 0); priority_queue<int>pq;
        for(auto it:tasks)
            v[it-'A']++;

        for(auto it:v)
            if(it>0)
                pq.push(it);

        int time=0, cnt=n+1;

        while(!pq.empty())
        {
            v.clear(); cnt=n+1;

            while(cnt and !pq.empty())
            {
                int tp=pq.top(); pq.pop();
                if(tp>1)
                    v.push_back(tp-1);
                time++, cnt--;
            }
            for(auto it:v)
            {
                if(it>0)
                    pq.push(it);
            }
            if(pq.empty())
                break;
                
            time+=cnt;
        }
        return time;
    }
};
