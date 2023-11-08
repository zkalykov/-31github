#include <iostream>
#include <vector>
#include <set>
#include <utility>
#include <bits/stdc++.h>
 
using namespace std;
int findFirst(vector<vector<int>> &G,int &k)
{
    for (int i = 0; i < G[k].size(); i++)
    {
        if (G[k][i] == -1)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> degs(n);
        int tmp;
        vector<vector<int>> G(n);
        long long sum = 0;
        multimap<int,int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            degs[i] = tmp;
            sum += tmp;
            G[i].resize(tmp,-1);
            m.insert(pair<int,int> (tmp,i));
        }
        cout << sum / 2 << endl;
 
        for (auto it = m.rbegin(); it != m.rend(); it++)
        {
            auto th = it; //+ 1;
            th++;
            int begin = findFirst(G,it->second);
            if(begin == -1)
                continue;
            for (int i = begin; i < it->first;i++)
            {
                int j = 0;
                bool f = false;
                int res = findFirst(G,th->second);
                if (res == -1)
                {
                    f = true;
                }
                else {
                    G[it->second][i] = th->second;
                    cout << it->second + 1 << " " << th->second + 1 << endl;
                    G[th->second][res] = it->second;
                }
                if (f)
                {
                    i--;
                }
                th++;
 
            }
        }
 
    }
    return 0;
}
