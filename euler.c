int p1(int n) {
  int sum = 0;
  int i;
  for (i = 0; i < n; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }
  return sum;
}

int p6() {
  int sum = 0;
  int sqsum = 0;

  int i;
  for (i = 0; i < 101; i++) {
    sum += i;
    sqsum += (i * i);
  }

  return (sum * sum) - sqsum;
}
