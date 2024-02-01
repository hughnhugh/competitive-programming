#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin>>test;
    
    while(test--){
        long long n, l, t;
        long long P;
        cin >> n >> P >> l >> t;

        long long maxTasks = n / 7;
        if (n % 7 != 0) maxTasks++;
        long long studyDays = 0;

        if (maxTasks % 2 == 0) {
            if (P <= (l + 2 * t) * (maxTasks / 2)) {
                studyDays += P / (l + 2 * t);
                if (P % (l + 2 * t) != 0) {
                    studyDays++;
                }
            } else {
                studyDays += maxTasks / 2;
                P-=(l + 2 * t) * (maxTasks / 2);
                studyDays += P / l;
                if (P % l != 0) {
                    studyDays++;
                }
            }
        } else {
            if (P <= (l + 2 * t) * (maxTasks / 2)) {
                studyDays += P / (l + 2 * t);
                if (P % (l + 2 * t) != 0) studyDays++;
            } else if (P <= (l + 2 * t) * (maxTasks / 2) + (l + t)) {
                studyDays += maxTasks / 2 + 1;
            } 
            else {
                studyDays += maxTasks / 2 + 1;
                P-=(l + 2 * t) * (maxTasks / 2) + (l + t);
                studyDays += P / l;
                if (P % l != 0) studyDays++;
            }
        }

        cout << n - studyDays << "\n";
    }
}