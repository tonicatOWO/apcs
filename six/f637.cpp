#include <iostream>
#include <string>

int dfs(const std::string& S, int n, size_t& pos) {
    if (S[pos] == '0') {
        ++pos;
        return 0;
    }
    if (S[pos] == '1') {
        ++pos;
        return n * n;
    }
    // S[pos] == '2'
    ++pos;
    int half = n / 2;
    int sum = 0;
    for (int i = 0; i < 4; ++i) {
        sum += dfs(S, half, pos);
    }
    return sum;
}

int main() {
    std::string S;
    int n;
    std::cin >> S >> n;
    size_t pos = 0;
    int ans = dfs(S, n, pos);
    std::cout << ans << std::endl;
    return 0;
}

