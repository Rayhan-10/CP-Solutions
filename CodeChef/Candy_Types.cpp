#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int freq[101] = {0};

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int maxFreq = 0;
        int answer = 1;

        for (int i = 1; i <= N; i++) {
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
                answer = i;
            }
        }

        cout << answer << endl;
    }

    return 0;
}