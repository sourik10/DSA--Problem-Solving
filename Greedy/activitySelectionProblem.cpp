int activitySelection(vector<int> start, vector<int> end, int n)
    {
       vector<pair<int,int>>act;
       for(int i=0;i<n;i++){
           act.push_back({end[i],start[i]});
       }
       sort(act.begin(),act.end());
       int ans=1;
       int last=act[0].first;
       for(int i=1;i<n;i++){
           if(act[i].second > last){
               ans++;
               last=act[i].first;
           }
       }
       return ans;
    }
