// vectorlib.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Math/Vec2.hpp"
#include "Math/Vec3.hpp"

#define CATCH_CONFIG_MAIN
#include "Thirdparty/catch2/catch.hpp"

using namespace cw;

TEST_CASE("It must passed", "[vector]")
{
	REQUIRE(true);
}

TEST_CASE("It should be default initial correctly", "[vector]")
{
	Vec2i v;
	REQUIRE(v.x == 0);
	REQUIRE(v.y == 0);
}

TEST_CASE("It should be initial correctly", "[vector]")
{
	Vec2i v(1, 1);
	REQUIRE(v.x == 1);
	REQUIRE(v.y == 1);
}

TEST_CASE("It can be copy using copy constructor", "[vector]")
{
	Vec2f v(2.2, 2.2);
	Vec2f v2 = v;
	REQUIRE(v2.x == 2.2f);
	REQUIRE(v2.y == 2.2f);
}

TEST_CASE("It can be copy using assignment operator", "[vector]")
{
	Vec2d v(2.2, 2.2);
	Vec2d v2(3.3, 3.3);
	v2 = v;
	REQUIRE(v2.x == 2.2);
	REQUIRE(v2.y == 2.2);
}

TEST_CASE("It can be + with another vector ", "[vector]")
{
	Vec2i v(2, 2);
	Vec2i v2(3, 3);
	Vec2i v3 = v2 + v;
	REQUIRE(v3.x == 5);
	REQUIRE(v3.y == 5);
}

TEST_CASE("It can be += with another vector ", "[vector]")
{
	Vec2i v(2, 2);
	Vec2i v2(3, 3);
	v += v2;
	REQUIRE(v.x == 5);
	REQUIRE(v.y == 5);
}

TEST_CASE("It can be add with another vector ", "[vector]")
{
	Vec2i v(2, 2);
	Vec2i v2(3, 3);
	Vec2i v3 = v.add(v2);
	REQUIRE(v3.x == 5);
	REQUIRE(v3.y == 5);
}

TEST_CASE("It can be - with another vector ", "[vector]")
{
	Vec2i v(2, 2);
	Vec2i v2(3, 3);
	Vec2i v3 = v2 - v;
	REQUIRE(v3.x == 1);
	REQUIRE(v3.y == 1);
}

TEST_CASE("It can be -= with another vector ", "[vector]")
{
	Vec2i v(2, 2);
	Vec2i v2(3, 3);
	v2 -= v;
	REQUIRE(v2.x == 1);
	REQUIRE(v2.y == 1);
}

TEST_CASE("It can be subtract with another vector ", "[vector]")
{
	Vec2i v(2, 2);
	Vec2i v2(3, 3);
	Vec2i v3 = v.subtract(v2);
	REQUIRE(v3.x == -1);
	REQUIRE(v3.y == -1);
}

TEST_CASE("it can add vector with a scalar with + ", "[vector]")
{
	Vec2<int> v(1, 1);
	auto result = v + 3;
	REQUIRE(result.x == 4);
	REQUIRE(result.y == 4);
}

TEST_CASE("it can subtract vector with a scalar with - ", "[vector]")
{
	Vec2<int> v(1, 1);
	auto result = v - 3;
	REQUIRE(result.x == -2);
	REQUIRE(result.y == -2);
}


TEST_CASE("it can multiply with a scalar correctly", "[vector]")
{
	Vec2<int> v(1, 1);
	auto result = v.mul(3);
	REQUIRE(result.x == 3);
	REQUIRE(result.y == 3);
}

TEST_CASE("it can multiply vector with a scalar with * ", "[vector]")
{
	Vec2<int> v(1, 1);
	auto result = v * 3;
	REQUIRE(result.x == 3);
	REQUIRE(result.y == 3);
}

TEST_CASE("it can multiply a scalar with a vector with * ", "[vector]")
{
	Vec2<int> v(1, 1);
	auto result = 3 * v;
	REQUIRE(result.x == 3);
	REQUIRE(result.y == 3);
}

TEST_CASE("it can multiply a scalar with a vector with *= ", "[vector]")
{
	Vec2<int> v(1, 1);
	v *= 3;
	REQUIRE(v.x == 3);
	REQUIRE(v.y == 3);
}

TEST_CASE("it can divide vector with a scalar with / ", "[vector]")
{
	Vec2<int> v(3, 3);
	auto result = v / 3;
	REQUIRE(result.x == 1);
	REQUIRE(result.y == 1);
}

TEST_CASE("Dot product is work", "[vector]")
{
	Vec2<int> v(3, 3);
	Vec2<int> v2(2, 2);
	auto result = v.dotProduct(v2);
	REQUIRE(result == 12);
}

TEST_CASE("Cross product is work", "[vector]")
{
	Vec2<int> v(3, 3);
	Vec2<int> v2(2, 2);
	auto result = v.crossProduct(v2);
	REQUIRE(result == 0);
}

TEST_CASE("magnitude is work", "[vector]")
{
	Vec2<int> v(3, 3);
	auto result = v.magnitude();
	REQUIRE(result == 4);
}

TEST_CASE("magnitude sqrt is work", "[vector]")
{
	Vec2<int> v(3, 3);
	auto result = v.magnitude_sqr();
	REQUIRE(result == 18);
}

TEST_CASE("Normalize is work", "[vector]")
{
	Vec2<int> v(3, 3);
	auto result = v.normalize();
	REQUIRE(result.x == 0);
	REQUIRE(result.y == 0);
}

/*TEST_CASE("Operator== is work", "[vector]")
{
	Vec2<int> v(4, 3);
	Vec2<int> v2(4, 3);
	REQUIRE(v == v2);
}

TEST_CASE("Operator!= is work", "[vector]")
{
	Vec2<int> v(4, 3);
	Vec2<int> v2(3, 3);
	REQUIRE(v != v2);
}*/


TEST_CASE("Vector3 should be default initial correctly", "[vector]")
{
	Vec3<int> v;
	REQUIRE(v.x == 0);
	REQUIRE(v.y == 0);
	REQUIRE(v.z == 0);
}

TEST_CASE("Vector3 should be initial correctly", "[vector]")
{
	Vec3<int> v(1, 1, 1);
	REQUIRE(v.x == 1);
	REQUIRE(v.y == 1);
	REQUIRE(v.z == 1);
}

TEST_CASE("Vector3 can be copy using copy constructor", "[vector]")
{
	Vec3<float> v(2.2, 2.2, 2.2);
	Vec3<float> v2 = v;
	REQUIRE(v2.x == 2.2f);
	REQUIRE(v2.y == 2.2f);
	REQUIRE(v2.z == 2.2f);
}

TEST_CASE("Vector3 can be copy using assignment operator", "[vector]")
{
	Vec3<float> v(2.2, 2.2, 2.2);
	Vec3<float> v2(3.3, 3.3, 3.3);
	v2 = v;
	REQUIRE(v2.x == 2.2f);
	REQUIRE(v2.y == 2.2f);
	REQUIRE(v2.z == 2.2f);
}

TEST_CASE("Vector3 can be + with another vector ", "[vector]")
{
	Vec3<int> v(2, 2, 2);
	Vec3<int> v2(3, 3, 3);
	Vec3<int> v3 = v2 + v;
	REQUIRE(v3.x == 5);
	REQUIRE(v3.y == 5);
	REQUIRE(v3.z == 5);
}

TEST_CASE("Vector3 can be += with another vector ", "[vector]")
{
	Vec3<int> v(2, 2, 2);
	Vec3<int> v2(3, 3, 3);
	v += v2;
	REQUIRE(v.x == 5);
	REQUIRE(v.y == 5);
	REQUIRE(v.z == 5);
}

TEST_CASE("Vector3 can be add with another vector ", "[vector]")
{
	Vec3<int> v(2, 2, 2);
	Vec3<int> v2(3, 3, 3);
	Vec3<int> v3 = v.add(v2);
	REQUIRE(v3.x == 5);
	REQUIRE(v3.y == 5);
	REQUIRE(v3.z == 5);
}

TEST_CASE("Vector3 can be - with another vector ", "[vector]")
{
	Vec3<int> v(2, 2, 2);
	Vec3<int> v2(3, 3, 3);
	Vec3<int> v3 = v2 - v;
	REQUIRE(v3.x == 1);
	REQUIRE(v3.y == 1);
	REQUIRE(v3.z == 1);
}

TEST_CASE("Vector3 can be -= with another vector ", "[vector]")
{
	Vec3<int> v(2, 2, 2);
	Vec3<int> v2(3, 3, 3);
	v2 -= v;
	REQUIRE(v2.x == 1);
	REQUIRE(v2.y == 1);
	REQUIRE(v2.z == 1);
}

TEST_CASE("Vector3 can be subtract with another vector ", "[vector]")
{
	Vec3<int> v(2, 2, 2);
	Vec3<int> v2(3, 3, 3);
	Vec3<int> v3 = v.subtract(v2);
	REQUIRE(v3.x == -1);
	REQUIRE(v3.y == -1);
	REQUIRE(v3.z == -1);
}

TEST_CASE("Vector3 can add vector with a scalar with + ", "[vector]")
{
	Vec3<int> v(1, 1, 1);
	auto result = v + 3;
	REQUIRE(result.x == 4);
	REQUIRE(result.y == 4);
	REQUIRE(result.z == 4);
}

TEST_CASE("Vector3 can subtract vector with a scalar with - ", "[vector]")
{
	Vec3<int> v(1, 1, 1);
	auto result = v - 3;
	REQUIRE(result.x == -2);
	REQUIRE(result.y == -2);
	REQUIRE(result.z == -2);
}


TEST_CASE("Vector3 can multiply with a scalar correctly", "[vector]")
{
	Vec3<int> v(1, 1, 1);
	auto result = v.mul(3);
	REQUIRE(result.x == 3);
	REQUIRE(result.y == 3);
	REQUIRE(result.z == 3);
}

TEST_CASE("Vector3 can multiply vector with a scalar with * ", "[vector]")
{
	Vec3<int> v(1, 1, 1);
	auto result = v * 3;
	REQUIRE(result.x == 3);
	REQUIRE(result.y == 3);
	REQUIRE(result.z == 3);
}

TEST_CASE("Vector3 can multiply a scalar with a vector with *= ", "[vector]")
{
	Vec3<int> v(1, 1, 1);
	v *= 3;
	REQUIRE(v.x == 3);
	REQUIRE(v.y == 3);
	REQUIRE(v.z == 3);
}

TEST_CASE("Vector3 can divide vector with a scalar with / ", "[vector]")
{
	Vec3<int> v(3, 3, 3);
	auto result = v / 3;
	REQUIRE(result.x == 1);
	REQUIRE(result.y == 1);
	REQUIRE(result.z == 1);
}

TEST_CASE("Vector3's dot product is work", "[vector]")
{
	Vec3<int> v(3, 3, 3);
	Vec3<int> v2(2, 2, 2);
	auto result = v.dotProduct(v2);
	REQUIRE(result == 18);
}

TEST_CASE("Vector3's cross product is work", "[vector]")
{
	Vec3<int> v(3, 3, 3);
	Vec3<int> v2(2, 2, 2);
	auto result = v.crossProduct(v2);
	REQUIRE(result.x == 0);
	REQUIRE(result.y == 0);
	REQUIRE(result.z == 0);
}

TEST_CASE("Vector3's magnitude is work", "[vector]")
{
	Vec3<int> v(3, 3, 3);
	auto result = v.magnitude();
	REQUIRE(result == 5);
}

TEST_CASE("Vector3's magnitude sqrt is work", "[vector]")
{
	Vec3<int> v(3, 3, 3);
	auto result = v.magnitude_sqr();
	REQUIRE(result == 27);
}

TEST_CASE("Vector3's normalize is work", "[vector]")
{
	Vec3<int> v(3, 3, 3);
	auto result = v.normalize();
	REQUIRE(result.x == 0);
	REQUIRE(result.y == 0);
	REQUIRE(result.z == 0);
}

