#include<bits/stdc++.h>
bool myComp(pair<int,int> &a,pair<int,int> &b){
    return (a.second>b.second);
}
// {first,second}={deadline,profit}
long long jobSchedule(vector<int>& deadline, vector<int>& profit, int n)
{
   // int sz=deadline.size();
	vector<pair<int,int>>job;
    for(int i=0;i<n;i++){
        job.push_back(make_pair(deadline[i],profit[i]));
    }
    sort(job.begin(),job.end(),myComp);
    int maxi=job[0].first;
        for(int i=1;i<n;i++){
            maxi=max(maxi,job[i].first);
        }
        int slot[maxi+1];
        for(int i=0;i<=maxi;i++){
            slot[i]=-1;
        }
        long long countJobs=0,jobProfit=0;
        for(int i=0;i<n;i++){
            for(int j=job[i].first;j>0;j--){
                if(slot[j]==-1){
                    slot[j]=i;
                    countJobs++;
                    jobProfit+=job[i].second;
                    break;
                }
            }
        }
    return jobProfit;
}
