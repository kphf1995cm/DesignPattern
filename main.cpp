# include<iostream>
# include"singleton.h"
# include"factory.h"

/*
void testSingleton() {
	Singleton *s1 = Singleton::getInstance();
	Singleton *s2 = Singleton::getInstance();
	if (s1 == s2) {
		std::cout << "Singleton" << std::endl;
	}

	EagerSingleton::getInstance();
}
*/

void testFactory() {
	Product *p;
	p = Factory::getProduct(1);
	p->showProduct();
}

int main() {
	//testSingleton();
	testFactory();
	return 0;
}