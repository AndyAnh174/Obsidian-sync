#include <iostream>

using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  int A[n];
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  int i = 0;
  while (i < n && A[i] != x) {
    i++;
  }

  if (i < n) {
    cout << "Vi tri cua x la: " << i + 1 << endl;
  } else {
    cout << "Khong tim thay x" << endl;
  }

  return 0;
}