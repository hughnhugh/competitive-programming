#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    int res[t];

    for (int i=0; i<t; i++) {
        int n;
        cin >> n;

        int nums[n];

        for (int j=0; j<n; j++) {
            cin >> nums[j]; 
        }

        vector<int> subs;
        int index = 0;
        int sum = 0;
        int maxValue = 0;

        for (int j=n-1; j>=0; j--) {
            int current = nums[j];
            sum += current;

            if (sum >= 0) {
                maxValue += sum;
                subs.push_back(current);
                index++;
            } 
            else {
                if (subs.size() == 0) subs.push_back(0);
                maxValue += current;
                subs[index-1] += current;
            }
        }
        res[i] = maxValue;
    }

    for (int i=0; i<t; i++) {
        cout << res[i] << "\n";
    }
    return 0;
}