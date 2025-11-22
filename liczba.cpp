#include <iostream>

int main(){
	int x;
	std::cin >> x;

	if (x < 1) {
		std::cout << "liczba musi byc dodatnia liczba naturalna\n";
		return 1;
	}

	std::cout << x << '\n';
}
