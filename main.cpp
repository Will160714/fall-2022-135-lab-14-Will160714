#include <iostream>
#include "MyVector.h"

int main(){
    MyVector<int> test1(5);
    MyVector<std::string> test2(10);
    std::cout << "Size\n";
    std::cout << "Test1: " << test1.size() << std::endl;
    std::cout << "Test2: " << test2.size() << std::endl;
    std::cout << std::endl;

    std::cout << "Capacity\n";
    std::cout << "Test1: " << test1.capacity() << std::endl;
    std::cout << "Test2: " << test2.capacity() << std::endl;
    std::cout << std::endl;

    std::cout << "Empty\n";
    std::cout << "Test1: " << test1.empty() << std::endl;
    std::cout << "Test2: " << test2.empty() << std::endl;
    std::cout << std::endl;

    std::cout << "Push Back\n";
    test1.push_back(1);
    test2.push_back("Hello");
    std::cout << "Test1[0] = " << test1[0] << std::endl;
    std::cout << "Test2[0] = " << test2[0] << std::endl;
    std::cout << std::endl;

    std::cout << "Pop Back\n";
    test1.push_back(2);
    test1.pop_back(2);
    test2.pop_back();
    std::cout << "Test1[0] = " << test1[0] << std::endl;
    std::cout << "Test1[1] = " << test1[1] << std::endl;
    std::cout << "Test2[0] = " << test2[0] << std::endl;
    std::cout << std::endl;

    std::cout << "Clear\n";
    test1.push_back(10);
    test1.push_back(20);
    std::cout << "Test1[0] = " << test1[0] << std::endl;
    std::cout << "Test1[1] = " << test1[1] << std::endl;
    test1.clear();
    std::cout << "Test1 Size: " << test1.size() << std::endl;
    std::cout << "Test1[0] = " << test1[0] << std::endl;
    std::cout << "Test1[1] = " << test1[1] << std::endl << std::endl;

    test2.push_back("Hello");
    test2.push_back("World");
    std::cout << "Test2[0] = " << test2[0] << std::endl;
    std::cout << "Test2[1] = " << test2[1] << std::endl;
    test2.clear();
    std::cout << "Test2 Size: " << test2.size() << std::endl;
    std::cout << "Test2[0] = " << test2[0] << std::endl;
    std::cout << "Test2[1] = " << test2[1] << std::endl;
}