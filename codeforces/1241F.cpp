#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
    int q;
    cin >> q;
    for (int query = 0; query < q; ++query) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        unordered_map<int, long long> ways;
        ways[arr[0]] = 1;
        for (int i = 1; i < n; ++i) {
            if (ways.count(arr[i]) > 0) {

            } else {
                ways[arr[i]] = 1;
            }
        }
    }
    cout <<"hello world\n";
    return 0;
}