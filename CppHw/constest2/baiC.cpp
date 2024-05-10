#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int countStrings(int n) {
    // Khởi tạo vector lưu trữ
    vector<int> dp(n + 1);

    // Trường hợp cơ bản
    dp[0] = 1;

    // Duyệt qua từng kích thước chuỗi từ 1 đến n
    for (int i = 1; i <= n; ++i) {
        // Tính giá trị dp[i] dựa trên các trường hợp trước đó
        dp[i] = (1LL * dp[i - 1] * 3) % MOD;
        if (i >= 2) {
            // Trừ đi số lượng chuỗi có 'ab' là chuỗi con
            dp[i] = (dp[i] - dp[i - 2] + MOD) % MOD;
        }
    }

    return dp[n];
}

int main() {
    int n;
    cin >> n;

    // Tính và in ra kết quả
    cout << countStrings(n) << endl;

    return 0;
}
