#include <ctime>
#include <cstdint>
#include <iostream>

int main()
{
	const time_t t = time(nullptr);
	const int64_t t64 = int64_t(t);

	std::cout << t64 << std::endl;

	return 0;
}