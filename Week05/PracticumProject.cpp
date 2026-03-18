#include <iostream>

struct A {
	A() {
		std::cout << "A()" << std::endl;
	}

	A(const A& other) {
		std::cout << "Copy A()" << std::endl;
	}

	A& operator=(const A& other) {
		std::cout << "operator= A()" << std::endl;
		return *this;
	}

	~A() {
		std::cout << "~A()" << std::endl;
	}

};

struct B {
	A a;
	int m;

	B(A a, int m) : m(m) {
		this->a = a;
		std::cout << "B()" << std::endl;
	}

	B(const A& a) : a(a) {
		m = 0;
		std::cout << "B()" << std::endl;
	}


	~B() {
		std::cout << "~B()" << std::endl;
	}
};


int main() {
	A a;
	//B b(a, 1);
	//B b1 = b;
	B b2(a);


	return 0;
}