#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double calculateFinishTime(const int& position, const int& speed, const int& target) {
        return (double) (target - position) / speed;
    }

    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = speed.size();
        vector<pair<int, int>> cars(n);
        for (int i=0; i<n; i++) {
            cars[i] = make_pair(position[i], speed[i]);
        }
        sort(cars.begin(), cars.end());

        stack<pair<int, int>> carsAdjusted;

        for (auto& car : cars) {
            carsAdjusted.push(car);
        }

        int fleetCount = 0;

        while (!carsAdjusted.empty()) {
            pair<int, int> car = carsAdjusted.top();
            carsAdjusted.pop();
            double fleetTime = calculateFinishTime(car.first, car.second, target);

            while (!carsAdjusted.empty()) {
                pair<int, int> nextCar = carsAdjusted.top();
                double nextCarTime = calculateFinishTime(nextCar.first, nextCar.second, target);

                if (nextCarTime <= fleetTime) carsAdjusted.pop();
                else break;
            }
            fleetCount++;
        }

        return fleetCount;
    }
};