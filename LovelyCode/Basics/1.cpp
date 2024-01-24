#include <iostream>
#include <cstring>
using namespace std;

int max_dominant_sum(string S) {
    int max_sum = 0;
    int freq[26] = {0};
    
    for (int i = 0; i < S.length(); i++) {
        freq[S[i] - 'a']++;
        int max_freq = 0;
        for (int j = 0; j < 26; j++) {
            max_freq = max(max_freq, freq[j]);
        }
        int sub_len = i + 1;
        int dominant_sum = 2 * max_freq - sub_len;
        max_sum = max(max_sum, dominant_sum);
        
        for (int j = 0; j < i; j++) {
            freq[S[j] - 'a']--;
        }
    }
    
    return 2*max_sum;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;
        int result = max_dominant_sum(S);
        cout << result << endl;
    }
    return 0;
}
