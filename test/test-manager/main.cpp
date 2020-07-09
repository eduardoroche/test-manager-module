#include <iostream>
#include "Operations/IOperation.h"
#include "Tests/ITest.h"
#include "Tests/Test.h"

int main() {
    IOperation operation;
    ITest *test = new Test();
	std::cout << "Hello world!" << std::endl;
}
