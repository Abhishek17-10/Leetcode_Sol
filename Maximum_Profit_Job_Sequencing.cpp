class Solution {
public:
    vector<int> dp;

    int f(int ind, vector<pair<int, pair<int, int>>>& v) {
        if (dp[ind] != -1) return dp[ind];

        int pro = v[ind].second.second;
        int st = v[ind].second.first;
        int ft = v[ind].first;

        if (ind == 0) return dp[ind] = pro;

        int t = pro;
        for (int i = ind - 1; i >= 0; i--) {
            if (v[i].first <= st) {
                t = f(i, v) + pro;
                break;
            }
        }

        int nt = f(ind - 1, v);
        return dp[ind] = max(t, nt);
    }

    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        vector<pair<int, pair<int, int>>> v;
        int n = startTime.size();
        dp.assign(n, -1);

        for (int i = 0; i < n; i++) {
            v.push_back({ endTime[i], {startTime[i], profit[i]} });
        }

        sort(v.begin(), v.end());

        return f(n - 1, v);
    }
};
