#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistance(vector<int>& position, int m) {

        sort(position.begin(),position.end());
        int n=position.size();
        int start=1;
        int end=position[n-1]-position[0];
        int ans=0;

         while(start<=end)
         {
            int mid=start+(end-start)/2;
            int count=1;
            int pos=position[0];

            for(int i=1;i<n;i++)
            {
                if(pos+mid<=position[i])
                {
                    count++;
                    pos=position[i];
                }
            }

            if(count<m)
            {
                end=mid-1;
            }
            else
            {
                ans=mid;
                start=mid+1;
            }


         }

        return ans;
    }
};

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.maxDistance(stalls,k) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}