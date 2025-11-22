#include <iostream>

bool czy_doskonala(int x) {
	int sum = 1;

	for (int i = 2; i <= x / 2; i++)
		if (x % i == 0) sum += i;

	return sum == x;
}

int main() {
	int x;
	std::cin >> x;

	if (x < 1) {
		std::cout << "liczba musi byc dodatnia liczba naturalna\n";
		return 1;
	}

	std::cout << x << ((czy_doskonala(x)) ? " " : " nie ") << "jest liczba doskonala." << '\n';
}
