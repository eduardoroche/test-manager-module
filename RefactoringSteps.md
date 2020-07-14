# High level refactoring strategy
For starters we need to gather information about the module origins, do we still have a domain expert available? Was it created by our organization or a third party?  
The idea is to be able to navigate the legacy code with enough knowledge to identify parts that maybe are not used or were not document properly. Having a domain expert to help clarify the questions that may arise would be ideal.  
Another important point is trying to rationalize the usefulness of refactoring the old module, because a new implementation means new issues. Maybe there are a better way to improve the module, like improve testing or focusing on performance.  
In case the refactoring is still justified, we need to start with a healthy amount of test cover on the old module, even if just high-level test. That will be our guarantee that the refactoring is not going to destroy our old business logic… Not having enough test may incur on new issues, some of them may not appear until much later if they are linked with legacy code implemented on demand and are not well documented.   

Steps to perform during refactoring:
## Before
Here we have three basic tasks (Can even be worked in parallel if needed):
### Check module testing coverage
Run a test coverage tool to identify which are the module areas safer to handle. Test usually represent real use cases of an application, so it is important to study them to understand how it really works.
### Check module static code
Compare module requirements / software specifications with our code to confirm we have full coverage and there is no hidden functionality, like implementation done under demand but not documented…
### Check module dynamic code
Running and debugging the module to check the callstack during use cases. This will give us clear overview on how the different parts interact with each other during run time, and how the application layers are constructed.  
Another useful approach to understand the code is study the module I/O… analyzing whatever input output we have (Like UI, or file system) can help a lot.
## During
### Decoupling
A common occurrence in legacy code is having long heavy methods and structures. Splitting these into smaller ones is good way to understand the code and identify critical structures (Adding new auxiliar methods may be a good idea in some scenarios).  
Decoupling can also be done within process and data. A probable scenario is process accessing data contained on other different process. Add entities to this data and organize the access between these processes and the data is a good way to identify and understand structures.  
This approach could conflict with DDD good practices however, splitting data and process is known as Anemic Domain model antipattern.
### Scope
Is critical to reduce the refactoring scope as much as possible so we can guarantee that the general module behavior remains the same.  
It is hard to predict how the new refactored code could affect to the untouched or unknown legacy code. So, having a small scope is key to give better estimations on future task and better corrections on possible derivations.
### Test
Test should be one of the main pillars of the refactoring, unit test specially.  
Automatic testing is helpful for sure, but low-level unit test will guarantee a safe refactoring process.  
Include integration and acceptance test is also important if were not present on the legacy code. It could be helpful to apply TDD in this stage, specially if the feature we are working on has no previous test in place.
## After
Extract performance and coverage metrics from the new implementation and compare them with the code. This is basic if we want to find any piece of refactored code that may not be working as intended.
