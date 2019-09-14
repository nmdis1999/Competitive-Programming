///Given two integer arrays of same size, nums and indexes,
///reorder elements in nums according to given indexes array.
#include <bits/stdc++.h>
using namespace std;
void swap(vector<int>& A, vector<int>& B, int i, int j) {
    int tmp = A[i];
    A[i] = A[j];
    A[j] = tmp;
    tmp = B[i];
    B[i] = B[j];
    B[j] = tmp;
  }
void sortAWithB(vectot<int>& A, vector<int>& B) {
    for (int i = 0; i < A.length; i++) {
      while (i != B[i] - 1) {
        swap(A, B, i, B[i] - 1);
      }
    }
  }
int main()
{
    int n;
    vector<int> a;
    vector<int> idx;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> idx[i];
    sortAwithB(a, idx);
    for (int i = 0; i < n; i++)
        cout << a[i] <<" ";
    return 0;
}
