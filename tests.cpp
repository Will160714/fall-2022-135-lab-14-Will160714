#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "MyVector.h"

TEST_CASE("Size & Capacity"){
    MyVector<int> test;
    CHECK(test.size() == 0);
    CHECK(test.capacity() == 20);
    test = MyVector<int>(30);
    CHECK(test.size() == 0);
    CHECK(test.capacity() == 30);
}

TEST_CASE("Empty & Push Back"){
    MyVector<std::string> test;
    CHECK(test.empty() == true);
    test = MyVector<std::string>(10);
    CHECK(test.empty() == true);
    MyVector<int> test1(1);
    test1.push_back(10);
    CHECK(test1[0] == 10);
    CHECK(test1.size() == 1);
    CHECK(test1.empty() == false);
    test1.push_back(20);
    CHECK(test1[1] == 20);
    CHECK(test1.size() == 2);
    CHECK(test1.capacity() == 2);
}

TEST_CASE("Pop Back"){
    MyVector<int> test(5);
    test.push_back(1);
    test.push_back(2);
    test.push_back(3);
    test.push_back(4);
    test.push_back(5);
    test.pop_back();
    CHECK(test[4] == 0);
    test.pop_back(2);
    CHECK(test[3] == 0);
    CHECK(test[2] == 0);
}

TEST_CASE("Clear"){
    MyVector<int> test(5);
    test.push_back(1);
    test.push_back(2);
    test.push_back(3);
    test.push_back(4);
    test.push_back(5);
    test.clear();
    CHECK(test.size() == 0);
    CHECK(test.capacity() == 5);
}
