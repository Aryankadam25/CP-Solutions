#include<bits/stdc++.h>
using namespace std;
const int MAX_A = 1000005; 
int freq[MAX_A];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int max_val = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
        max_val = max(max_val, x);
    }
    for (int i = max_val; i >= 1; i--) {
        int multiple_count = 0;
        for (int j = i; j <= max_val; j += i) {
            multiple_count += freq[j];
        }
        if (multiple_count >= 2) {
            cout << i << "\n";
            break;
        }
    }
}