#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> beautyCount;

    for (int i=0; i<n; i++) {
        int beauty;
        cin >> beauty;

        beautyCount[beauty] += 1;
    }

    cout << prev(beautyCount.end())->first - beautyCount.begin()->first << " ";

    if (beautyCount.size() == 1) {
        int count = beautyCount.begin()->second;
        long long combinations = 1;
        for (int i=0; i<2; i++) {
            combinations *= (count-i);
            combinations /= (i+1);
        }
        cout << combinations;
    } else {
        cout << (long long) prev(beautyCount.end())->second * beautyCount.begin()->second;
    }
    
    return 0;
}