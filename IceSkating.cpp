#include <iostream>
#include <vector>
#include <map>

// class UnionFind {
// private:
//     std::vector<int> parent;
//     std::vector<int> rank;

// public:
//     UnionFind(int size) : parent(size), rank(size, 0) {
//         for (int i = 0; i < size; ++i) {
//             parent[i] = i;
//         }
//     }

//     int find(int x) {
//         if (parent[x] != x) {
//             parent[x] = find(parent[x]); // Path compression
//         }
//         return parent[x];
//     }

//     void unionSets(int x, int y) {
//         int rootX = find(x);
//         int rootY = find(y);

//         if (rootX != rootY) {
//             if (rank[rootX] > rank[rootY]) {
//                 parent[rootY] = rootX;
//             } else if (rank[rootX] < rank[rootY]) {
//                 parent[rootX] = rootY;
//             } else {
//                 parent[rootY] = rootX;
//                 rank[rootX] += 1;
//             }
//         }
//     }
// };

// int main() {
//     int n;
//     std::cin >> n;
//     std::vector<std::pair<int, int>> snow_drifts(n);
//     UnionFind uf(n);

//     std::map<int, int> rows, cols;
//     for (int i = 0; i < n; ++i) {
//         std::cin >> snow_drifts[i].first >> snow_drifts[i].second;
//         if (rows.count(snow_drifts[i].first)) {
//             uf.unionSets(i, rows[snow_drifts[i].first]);
//         } else {
//             rows[snow_drifts[i].first] = i;
//         }
//         if (cols.count(snow_drifts[i].second)) {
//             uf.unionSets(i, cols[snow_drifts[i].second]);
//         } else {
//             cols[snow_drifts[i].second] = i;
//         }
//     }

//     // Count the number of unique sets
//     std::map<int, int> unique_sets;
//     for (int i = 0; i < n; ++i) {
//         unique_sets[uf.find(i)]++;
//     }

//     // Output the result, which is one less than the number of unique sets
//     std::cout << unique_sets.size() - 1 << std::endl;

//     return 0;
// }

int main() {
    int n;
    std::cin >> n;
    std::vector<std::pair<int, int>> snow_drifts(n);

    std::map<int, int> rows, cols;
    for (int i = 0; i < n; ++i) {
        std::cin >> snow_drifts[i].first >> snow_drifts[i].second;
    }

}