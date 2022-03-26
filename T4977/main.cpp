#include <iostream>

int main(){
	int a, b, n;
	std::cin >> a >> b >> n;
	int l = b - a;
	int x = l ? a + (n - 1) * l : a;
	int y = (a + x) * n / 2;
	std::cout << x << " " << y << std::endl;
	return 0;
}