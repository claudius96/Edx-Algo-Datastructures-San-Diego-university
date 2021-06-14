#include <iostream>

long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}
long long gcd_euclid(long long a, long long b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		long long a_prim = a % b;
		return gcd_euclid(b, a_prim);
	}
}
long long lcm_euclid(long long a, long long b)
{
	long long gcd = gcd_euclid(a, b);
	long long product = a * b;
	
	return product / gcd;
	
}

int main() {
  long long a, b;
  std::cin >> a >> b;
  std::cout << lcm_euclid(a, b) << std::endl;
  return 0;
}
