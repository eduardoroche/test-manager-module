[![Build Status](https://travis-ci.org/jonasrodriguez/test-manager-module.svg?branch=master)](https://travis-ci.org/github/jonasrodriguez/test-manager-module)
# test-manager-module

### Proposed project structure rationale

To create the test-manager-module structure I decided to use the Visitor pattern.  
One of the principal benefits of the visitor pattern is the ability to define a new operation (also called visitor) without changing the classes of the Test on which it operates.  
I found this pattern superior to other for this particular scenario, because the use of the double dispatch means that you won’t need any conditional logic to execute the proper operation for a specific test.  
Using the Visitor pattern, we can solve the main concerns of this use case:  
* Extensibility: As mentioned above, new operations can be added without modifying the test models. Creating a new operation class that derives from IOperation interface is the only thing you need to do.  
* Maintainability: The interaction between operations and test is limited to each of the Visit methods. This is highly maintainable, because when wanting to add new features in an operation to be applied over the test the developer only must focus on that small part of the code.  


### UML Diagram

https://github.com/jonasrodriguez/test-manager-module/blob/master/TestModuleUML.png

### High level refactoring strategy

https://github.com/jonasrodriguez/test-manager-module/blob/master/RefactoringSteps.md

### How to run project
Test manager module has been developed using c++ standard, so only a c++14 compiler and cmake are needed to deploy and build it.  
You can use gcc on linux or winGW on windows, and download cmake from (https://cmake.org/download/).  
The module code it's not runnable, but you run the test/test-manager that covers all test and operations implemented.  
If you want to skip the compilation you can also check the test run results on the travis log (https://travis-ci.org/github/jonasrodriguez/test-manager-module).  
Once you have installed the cmake and c++ compiler, you can build the project following this steps:  
```
mkdir build
cd build
cmake ..
make
cd test/test-manager
TestModuleTest.exe
```
