#include"Smartphone.h"
#include"Catalog.h"
#include<iostream>
using namespace std;

Catalog InitializeCatalog() {
	Catalog catalog;
	Smartphone samePhoneToSearch{ "iPhone 12 Pro", 0, "apple", "white",
							 "" , "3", "64", "", "ios", 2, "yes" };
	catalog.addSmartphone("iPhone 12 Pro", 100, "Apple", "White",
		"6", "3", "64", "Apple", "iOS", 3 , "Yes");
	catalog.addSmartphone(samePhoneToSearch);

	return catalog;
}

int main(int argc, char* argv[]) {
	Catalog catalog = InitializeCatalog();

	Smartphone whatBuyerLikes{ "iPhone 12 Pro", 0, "apple", "white",
							 "" , "", "", "", "ios", 2, "yes" };

	Smartphone smartphone = catalog.search(whatBuyerLikes);

	if (smartphone.getModel() != "") {
		std::cout << "You might like this: ";
		smartphone.Print();
	}
	else cout << "Sorry, we have nothing for you.";

	return 0;
}
