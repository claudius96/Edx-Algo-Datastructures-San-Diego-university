#include <iostream>

long long pisano(long long mod)
{
	long long prev = 0;
	long long current = 1;
	long long length = 0;
	for (long long i = 0; i < (mod * mod); i++)
	{
		long long temp = 0;
		temp = current;
		current = (prev + current) % mod;
		prev = temp;
		
		if(prev == 0 && current == 1)
		{
			length = i + 1;
			break;
		}
		
	}
	return length;
}
long long get_fibonacci_fast(long long n, long long m)
{
	long long length = pisano(m);
	long long rem = n % length;
	long long arr[rem];
	arr[0] = 0;
	arr[1] = 1;
	
	for(long long i = 2;i <= rem;i++)
	{
		arr[i] = (arr[i - 1] + arr[i - 2]) % m;
	}
	return arr[rem];
}


int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout <<get_fibonacci_fast(n, m)<< '\n';
}

