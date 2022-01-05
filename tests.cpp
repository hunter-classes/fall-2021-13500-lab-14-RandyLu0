#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "MyVector.h"

MyVector<int> i;
MyVector<double> d;

TEST_CASE("size and push_back tests"){
    CHECK(!d.size());
    i.push_back(4);
    i.push_back(1);
    i.push_back(7);
    CHECK(i.size() == 3);
}

TEST_CASE("capacity tests"){
    CHECK(d.capacity() == 1);
    CHECK(i.capacity() == 4);
}

TEST_CASE("empty tests"){
    CHECK(d.empty());
    CHECK(!i.empty());
}

TEST_CASE("popback and [] tests"){
    CHECK(i[2] == 7);
    i[2] = 5;
    CHECK(i[2] == 5);
    i.pop_back();
    i.pop_back(856);
    CHECK(i.size() == 2);
    i.pop_back(0);
    i.push_back(4);
    i.pop_back(1);
    CHECK(i[0] == 1);
}

TEST_CASE("clear tests"){
    i.clear();
    d.clear();
    d.pop_back(8);
    CHECK(i.empty());
    i.push_back(3);
    CHECK(d.empty());
}
