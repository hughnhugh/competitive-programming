#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> elements;

    for (int i=1; i<=n; i++) {
        int value;
        cin >> value;
        elements[value] = i;
    }

    int m;
    cin >> m;

    long long vasya = 0;
    long long petya = 0;

    for (int i=0; i<m; i++) {
        int query;
        cin >> query;

        int leftSearch = elements[query];
        vasya += leftSearch;
        petya += n - leftSearch + 1;
    }

    cout << vasya << " " << petya;

    return 0;
}
