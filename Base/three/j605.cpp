#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, maxScore = -1, maxScoreTime = 0, errorCount = 0;
    cin >> n;
    int originalN = n;
    while (n--) {
        int time, score;
        cin >> time >> score;
        if (score == -1) errorCount++;
        if (score > maxScore) {
            maxScore = score;
            maxScoreTime = time;
        }
    }
    int totalScore = max(0, maxScore - originalN - errorCount * 2);
    cout << totalScore << " " << maxScoreTime << endl;
    return 0;
}

