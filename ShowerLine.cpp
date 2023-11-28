#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int g[5][5];

    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            cin >> g[i][j];
        }
    }

    std::vector<int> nums = {0, 1, 2, 3, 4};
    
    // Sort the vector to make sure we start with the smallest permutation
    std::sort(nums.begin(), nums.end());

    int maxHappiness = 0;

    do {
        int currentHappiness = g[nums[0]][nums[1]] + g[nums[1]][nums[0]] + g[nums[2]][nums[3]] + 
        g[nums[3]][nums[2]] + g[nums[1]][nums[2]] + g[nums[2]][nums[1]] + g[nums[3]][nums[4]] + g[nums[4]][nums[3]] +
        g[nums[2]][nums[3]] + g[nums[3]][nums[2]] + g[nums[3]][nums[4]] + g[nums[4]][nums[3]];

        if (currentHappiness > maxHappiness) maxHappiness = currentHappiness;

    // Generate the next permutation
    } while (std::next_permutation(nums.begin(), nums.end()));

    cout << maxHappiness;

    return 0;
}