Singleton Design Pattern Implementation in C++
Overview
This repository contains an implementation of the Singleton design pattern in C++. The Singleton pattern is a creational design pattern that ensures a class has only one instance and provides a global point of access to that instance. This is particularly useful in scenarios where consistent access to a single shared resource or configuration is required throughout an application.

Key Features
Thread-Safe Singleton: The Singleton instance is lazily initialized in a thread-safe manner, ensuring that the instance is created only once, even in a multi-threaded environment.
Controlled Instance Creation: The class enforces a single instance through private constructors and deleted copy/move operations.
Random Number Generation: Includes functionality to generate a random floating-point number between 0 and 1 as a demonstration of the Singleton's capabilities.
Table of Contents
Background
Installation
Usage
Code Explanation
Best Practices
Contributing
License
Contact
Background
The Singleton design pattern is commonly used in software design when a single instance of a class is needed to coordinate actions across the system. Typical use cases include:

Configuration Management: Providing a single point of access to application configuration settings.
Logging: Ensuring that all components in an application write to the same log file.
Resource Management: Managing access to resources such as database connections or hardware interfaces.
This project demonstrates how to implement the Singleton pattern in C++ with thread safety considerations, ensuring that the Singleton is robust and suitable for use in complex, multi-threaded applications.

Installation
Prerequisites
C++ Compiler: Ensure that you have a C++ compiler that supports C++11 or later (e.g., GCC, Clang, MSVC).
CMake (Optional): If you prefer to use CMake for building the project, ensure that CMake is installed.
Cloning the Repository
Clone the repository to your local machine using the following command:
git clone https://github.com/yourusername/singleton-pattern-cpp.git
cd singleton-pattern-cpp

Building the Project
Using a C++ Compiler
You can compile the project directly using a C++ compiler:
g++ -std=c++11 -o singleton main.cpp

Using CMake (Optional)
If you prefer to use CMake:
mkdir build
cd build
cmake ..
make

This will generate an executable named singleton.

Usage
Run the compiled executable:
./singleton

Expected output:
constructed singleton 
I'm a singleton class 
<random number between 0 and 1>

The output demonstrates the construction of the Singleton instance, the message from the showMessages method, and the generation of a random number.

Code Explanation
Singleton Class
The Singleton class is the core of this project, designed to ensure that only one instance of the class can exist.

Key Methods
static Singleton& get():

Description: Provides access to the single instance of the Singleton class. The instance is created lazily on the first call.
Thread-Safe: The instance is created in a thread-safe manner using the static local variable idiom.
void showMessages() const:

Description: Outputs a message to demonstrate the Singleton instance is in use.
Const-Correctness: This method does not modify the state of the Singleton instance.
float RandomNumberGeneraor():

Description: Generates and returns a random floating-point number between 0 and 1.
Thread Safety: Uses a mutex to ensure that the random number generation is thread-safe.
Key Attributes
Private Constructor & Destructor:

Purpose: Prevents direct instantiation or destruction of the Singleton class, ensuring that the get() method is the only way to access the instance.
Deleted Copy Constructor & Assignment Operator:

Purpose: Prevents copying or assigning the Singleton instance, ensuring that no duplicate instances can be created.
std::mutex m_Mutex:

Purpose: Ensures thread-safe access to the m_RandomNumber during random number generation.
Best Practices
Singleton Pattern Usage
Limited Use: Use the Singleton pattern sparingly. Overuse can lead to tight coupling and make your code harder to maintain or test.
Global State Caution: Be mindful that Singletons introduce global state, which can lead to issues with dependencies and make unit testing more difficult.
Thread Safety: Always consider thread safety when implementing Singletons, especially in multi-threaded environments.
Code Quality
Const-Correctness: Ensure methods that do not modify the state of the object are marked const.
Error Handling: Add appropriate error handling if your Singleton involves resource management.
Documentation: Maintain clear and concise documentation for your Singleton class to make it easier for others to understand its purpose and usage.
Contributing
Contributions are welcome! Please follow these guidelines when contributing:

Fork the Repository: Create a personal fork of the project.
Create a Feature Branch: Create a branch for your feature or bugfix.
Submit a Pull Request: Submit your changes as a pull request to the main repository.
Ensure that your code adheres to the style and standards used in the project.