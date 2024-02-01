#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b==0) return a;
    return gcd(b, a%b);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while(test--){
        int n;
        cin >> n;

        vector<long long> nums(n);
        for (int i=0; i<n; i++) {
            cin >> nums[i];
        }

        if (n == 1) {
            cout << 1 << "\n";
            continue;
        }

        sort(nums.begin(), nums.end());

        int hcf = nums[1]-nums[0];

        for (int i=1; i<n-1; i++) {
            long long current = nums[i];
            long long next = nums[i+1];

            hcf = gcd(hcf, nums[i+1]-nums[i]);
            if (hcf == 1) break;
        }

        long long current = nums[n-1];

        bool insertedLeft = false;
        
        for (int i=n-2; i>=0; i--) {
            current -= hcf;
            if (current != nums[i]) {
                if ((nums[n-1] - current) / hcf <= n) {
                    nums.insert(nums.begin() + i+1, current);
                    insertedLeft = true;
                }
                break;
            }
        }

        if (!insertedLeft) nums.push_back(nums[n-1] + hcf);

        long long operations = 0;

        for (int i=0; i<nums.size(); i++) {
            operations += (nums[n] - nums[i]) / hcf;
        }

        cout << operations << "\n";
    }

    return 0;
}