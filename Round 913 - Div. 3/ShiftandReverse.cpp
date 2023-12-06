#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while(test--){
        int n;
        cin >> n;

        // Check max one break point && the beginning of next sequence is less than (for ascending) or greater than (for descending)
        // Greedy strategy for finding the best action
        // Should be doing at most n/2-1 shift operations
        // If you need to do more shift operations, first reverse the array then shift
        // To identify the point where you need to clean up, you find where the smallest and largest elements are (next to each other or across from each other)
        // If largest then smallest then array would be in ascending, shift until smallest is at the bottom and largest at the end, may need to reverse before shifting then unreverse to complete.
        // If smallest then largest then array is descending, perform required shift operations or perhaps first reverse the array, 
        // So the options are:
        // 1. shift, reverse. 
        // 2. shift
        // 3. reverse, shift, reverse
        // 4. reverse, shift
        // 5. reverse

        // Steps needed to take are:
        // Determine if sequence is valid and note the states (reversed, smallest and largest index)
        // If valid, determine the number of operations required exploring the branches - If abs(smallIndex, largeIndex) == 1, if smallind < largeind, if rev & smallIndex < n/2-1

    }
}