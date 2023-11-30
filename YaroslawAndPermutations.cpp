#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> nums;

    for (int i=0; i<n; i++) {
        int a;
        cin >> a;

        nums[a] += 1;
    }

    for (auto it=nums.begin(); it != nums.end(); ++it) {
        if (n % 2 == 1 && it->second > n/2+1) {
            cout << "NO";
            return 0;
        }
        if (n % 2 == 0 && it->second > n/2) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}