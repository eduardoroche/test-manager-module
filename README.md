[![Build Status](https://travis-ci.org/jonasrodriguez/test-manager-module.svg?branch=master)](https://travis-ci.org/github/jonasrodriguez/test-manager-module)
# test-manager-module

### Proposed project structure rationale

### UML Diagram

### How to run project
Test manager module has been developed using c++ standard, solo only a c++14 compiler and cmake are needed to deploy and build it.
The module code it's not runnable, but you run the test/test-manager that covers all test and operations implemented.
You can use gcc on linux or winGW on windows, and download cmake from (https://cmake.org/download/). 
If you want to skip the compilation you can also check the test run results on the travis log (https://travis-ci.org/github/jonasrodriguez/test-manager-module).
```
mkdir build
cd build
cmake ..
make
cd test/test-manager
TestModuleTest.exe
```
