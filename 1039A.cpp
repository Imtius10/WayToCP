#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long c;
    cin >> n >> c;

    vector<long long> a(n);
    for (auto &x : a) cin >> x;

    sort(a.begin(), a.end());  // ছোটদের আগে destroy করার চেষ্টা করবো

    int coins = 0;

    while (!a.empty()) {
        // সবগুলো ব্যাগের মধ্যে থেকে একটি বেছে নিই (ধরি ছোটতম)
        long long x = a.front();
        a.erase(a.begin()); // Destroy করলাম

        if (x > c) coins++; // যদি ওজন বেশি হয় তাহলে কয়েন লাগবে

        // এখন বাকি সব ব্যাগের ওজন দ্বিগুণ করবো
        for (auto &v : a) {
            v *= 2;
        }
    }

    cout << coins << '\n';
    return 0;
}
