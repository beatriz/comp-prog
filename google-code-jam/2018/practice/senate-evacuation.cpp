#include<iostream>
#include<algorithm>
using namespace std;

string evac_plan(int iter) {
  int n;
  cin >> n;
  int p[26];
  int totalSenators = 0;
  for (int i= 0; i < n; i++) {
    scanf("%d", &p[i]);
    totalSenators += p[i];
  }

  printf("#%d: ", iter);

  for (int i = 0; i < totalSenators; i += 2) {
    if ((totalSenators - i) == 3) {
      printf("A");
      p[0] = 0;
    } else {
      int* a = max_element(p, p+n);
      int ai = a - p;
      p[ai] = p[ai] - 1;
      int* b = max_element(p, p+n);
      int bi = b - p;
      p[bi] = p[bi] - 1;

      printf("%c%c", ('A' + ai), ('A' + bi));
    }
    printf(" ");
  }
  printf("\n");
  return "";
}

int main() {
  int t;
  cin >> t;

  for (int iter = 0; iter < t; iter++) {
    int n;
    cin >> n;
    int p[26];
    int totalSenators = 0;
    for (int i= 0; i < n; i++) {
      scanf("%d", &p[i]);
      totalSenators += p[i];
    }

    printf("Case #%d: ", iter + 1);

    for (int i = 0; i < totalSenators; i += 2) {
      if ((totalSenators - i) == 3) {
        printf("A");
        p[0] = 0;
      } else {
        int* a = max_element(p, p+n);
        int ai = a - p;
        p[ai] = p[ai] - 1;
        int* b = max_element(p, p+n);
        int bi = b - p;
        p[bi] = p[bi] - 1;

        printf("%c%c", ('A' + ai), ('A' + bi));
      }
      printf(" ");
    }
    printf("\n");
  }
  return 0;
}