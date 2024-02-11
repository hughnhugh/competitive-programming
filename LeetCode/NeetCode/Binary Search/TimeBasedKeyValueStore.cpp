#include <bits/stdc++.h>
using namespace std;

class TimeMap {
private: 
    unordered_map<string, map<int, string>> timeMap;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        timeMap[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        if (timeMap.find(key) == timeMap.end()) {
        return ""; // Key does not exist
        }

        auto it = timeMap[key].upper_bound(timestamp);
        if (it == timeMap[key].begin()) {
            return "";
        }
        
        it--;
        return it->second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */