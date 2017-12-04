#include<iostream>

int main() {
	const float VAT = 0.21;
	float basePrice, finalPrice=0.00;

	std::cout << "Enter base price: ";
	std::cin >> basePrice;
	finalPrice = basePrice*(1+VAT);
	std::cout << "\nThe final price is: " << finalPrice<< std::endl;


	return 0;
}