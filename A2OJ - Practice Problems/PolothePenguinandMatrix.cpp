#include <bits/stdc++.h>

using namespace std;

int best_operations = INT_MAX;

int calculateOperations(int target, int d, const vector<int> & elements) {
    int operations = 0;

    for (int i=0; i < elements.size(); i++) {
        int current = elements[i];
        operations += abs((current-target*d))/d;
    }

    return operations;
}

void ternarySearch(int left, int right, int d, const vector<int> &elements) {
    if (left > right) return;

    int mid1 = left + (right - left) / 3;
    int mid2 = right - (right - left) / 3;

    int leftOperations = calculateOperations(mid1, d, elements);
    int rightOperations = calculateOperations(mid2, d, elements);

    if (leftOperations < rightOperations) {
        best_operations = min(best_operations, leftOperations);
        ternarySearch(left, mid2 - 1, d, elements);
    } else {
        best_operations = min(best_operations, rightOperations);
        ternarySearch(mid1 + 1, right, d, elements);
    }
}

int main() {
    int n, m, d;
    cin >> n >> m >> d;

    vector<int> elements(n * m);

    for (int i=0; i < n*m; i++) {
        cin >> elements[i];
    }

    sort(elements.begin(), elements.end());

    int smallest = elements[0];
    int operations = 0;

    for (int i=0; i < n*m; i++) {
        int current = elements[i];
        if ((current - smallest) % d != 0) {
            cout << -1;
            return 0;
        } else {
            elements[i] -= smallest;
        }
    }

    int left = elements[0] / d;
    int right = elements[n*m-1] / d;

    ternarySearch(left, right, d, elements);

    int leastOperations = best_operations;

    cout << leastOperations;
}