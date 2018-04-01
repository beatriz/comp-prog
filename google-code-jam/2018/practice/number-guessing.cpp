#include<iostream>
using namespace std;

void process() {
  int a, b, n;
  scanf("%d %d", &a, &b);
  scanf("%d", &n);
  while (n > 0) {
    int av = (a+b)/2;
    if (av == a)
      av++;
    printf("%d\n", av);
    string r;
    cin >> r;

    if (r == "CORRECT")
      break;
    else if (r == "TOO_SMALL")
      a = av;
    else if (r == "TOO_BIG")
      b = av;

    n--;
  }
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    process();
  }
}