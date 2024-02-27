#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <utility>
#include <algorithm>

using namespace std;

struct Compare {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
        return a.first < b.first;
    }
};

class Twitter {
private:
    unordered_map<int, unordered_set<int>> following;
    unordered_map<int, deque<pair<int, int>>> tweetCache; // Key user ID, Value - heap<Time posted & Tweet ID> Should never exceed 10 values
    int time = 0;
    const int NEWS_FEED_SIZE = 10;
public:
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        // Save to global tweet store containing a triple of userId, tweetId
        tweetCache[userId].push_front(make_pair(time, tweetId));
        if (tweetCache[userId].size() > NEWS_FEED_SIZE) tweetCache[userId].pop_back();
        time++;
    }
    
    vector<int> getNewsFeed(int userId) {
        // Retrieve tweets from followed map
        follow(userId, userId);
        unordered_set<int> followees = following[userId];
        priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> tweetHeap; 

        for (int followee : followees) {
            const deque<pair<int, int>>& cache = tweetCache[followee];
            for (const auto& tweet : cache) tweetHeap.push(tweet);
        }

        int trueSize = min(NEWS_FEED_SIZE, (int) tweetHeap.size());

        vector<int> newsFeed(trueSize);
        for (int i=0; i<trueSize; i++) {
            newsFeed[i] = tweetHeap.top().second; tweetHeap.pop();
        }
        return newsFeed;
    }
    
    void follow(int followerId, int followeeId) {
        // Add to follow map
        following[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        // Remove from follow map
        if (following[followerId].find(followeeId) != following[followerId].end()) following[followerId].erase(followeeId);
    }
};

