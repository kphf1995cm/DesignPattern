# ifndef _FACTORY_H_
# define _FACTORY_H_
# include<iostream>

class Product
{
public:
	Product() {};
	virtual ~Product() {};
	virtual void showProduct() {};
};

class ProductA:public Product {
public:
	ProductA() {
		A = 1;
		std::cout << "ProductA" << std::endl;
	}
	void showProduct() {
		std::cout << "A=" << A << std::endl;
	}
	~ProductA() {};
private:
	int A;
};

class ProductB :public Product {
public:
	ProductB() {
		B = 2;
		std::cout << "ProductB" << std::endl;
	}
	void showProduct() {
		std::cout << "B=" << B << std::endl;
	}
	~ProductB() {};
private:
	int B;
};

class Factory {
public:
	static Product* getProduct(int parameter) {
		Product *p=NULL;
		if (parameter == 1) {
			p = new ProductA();
		}
		else {
			if (parameter == 2)
				p = new ProductB();
		}
		return p;
	}
};

# endif
