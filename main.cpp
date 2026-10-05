#include <iostream>

int main()
{
    int firstValue;
    int secondValue;
    int thirdValue;

    std::cout << "Enter the first integer: ";
    std::cin >> firstValue;

    std::cout << "Enter the second integer: ";
    std::cin >> secondValue;

    std::cout << "Enter the third integer: ";
    std::cin >> thirdValue;

    int* firstPointer = new int(firstValue);
    int* secondPointer = new int(secondValue);
    int* thirdPointer = new int(thirdValue);

    std::cout << "\nOriginal variable values:" << std::endl;
    std::cout << "First value: " << firstValue << std::endl;
    std::cout << "Second value: " << secondValue << std::endl;
    std::cout << "Third value: " << thirdValue << std::endl;

    std::cout << "\nValues stored in dynamic memory:" << std::endl;
    std::cout << "First pointer value: " << *firstPointer << std::endl;
    std::cout << "Second pointer value: " << *secondPointer << std::endl;
    std::cout << "Third pointer value: " << *thirdPointer << std::endl;

    std::cout << "\nMemory addresses stored in the pointers:" << std::endl;
    std::cout << "First pointer address: " << firstPointer << std::endl;
    std::cout << "Second pointer address: " << secondPointer << std::endl;
    std::cout << "Third pointer address: " << thirdPointer << std::endl;

    delete firstPointer;
    delete secondPointer;
    delete thirdPointer;

    firstPointer = nullptr;
    secondPointer = nullptr;
    thirdPointer = nullptr;

    return 0;
}
