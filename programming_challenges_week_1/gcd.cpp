#include <iostream>

int gcd_naive(int a, int b) {
	
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}
int gcd_euclid(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		int a_prim = a % b;
		return gcd_euclid(b, a_prim);
	}
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd_euclid(a, b) << std::endl;
  return 0;
}

