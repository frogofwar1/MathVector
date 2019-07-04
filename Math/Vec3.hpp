#pragma once
#include <string>

namespace cw
{

	template<class T>
	class Vec3
	{
	public:
		T x;
		T y;
		T z;

		Vec3() : x(0), y(0), z(0) {}
		Vec3(T x, T y, T z) : x(x), y(y), z(z) {}
		Vec3(const Vec3& v) : x(v.x), y(v.y), z(v.z) {}

		~Vec3() {};


		Vec3& operator=(const Vec3& v)
		{
			x = v.x;
			y = v.y;
			z = v.z;
			return *this;
		}


		Vec3 operator+(const Vec3& v)
		{
			return Vec3(x + v.x, y + v.y, z + v.z);
		}
		Vec3 operator-(const Vec3& v)
		{
			return Vec3(x - v.x, y - v.y, z - v.z);
		}


		Vec3 operator+(float s)
		{
			return Vec3(x + s, y + s, z + s);
		}
		Vec3 operator-(float s)
		{
			return Vec3(x - s, y - s, z - s);
		}
		Vec3 operator*(float s)
		{
			return Vec3(x * s, y * s, z * s);
		}
		Vec3 operator/(float s)
		{
			return Vec3(x / s, y / s, z / s);
		}


		Vec3& operator+=(const Vec3& v)
		{
			x += v.x;
			y += v.y;
			z += v.z;
			return *this;
		}
		Vec3& operator-=(const Vec3& v)
		{
			x -= v.x;
			y -= v.y;
			z -= v.z;
			return *this;
		}


		Vec3& operator+=(float s)
		{
			x += s;
			y += s;
			z += s;
			return *this;
		}
		Vec3& operator-=(float s)
		{
			x -= s;
			y -= s;
			z -= s;
			return *this;
		}
		Vec3& operator*=(float s)
		{
			x *= s;
			y *= s;
			z *= s;
			return *this;
		}
		Vec3& operator/=(float s)
		{
			x /= s;
			y /= s;
			z /= s;
			return *this;
		}


		Vec3 add(const Vec3& v)
		{
			return Vec3(x + v.x, y + v.y, z + v.z);
		}
		Vec3 subtract(const Vec3& v)
		{
			return Vec3(x - v.x, y - v.y, z - v.z);
		}


		Vec3 add(float s)
		{
			return Vec3(x + s, y + s, z + s);
		}
		Vec3 subtract(float s)
		{
			return Vec3(x - s, y - s, z - s);
		}
		Vec3 mul(float s)
		{
			return Vec3(x * s, y * s, z * s);
		}
		Vec3 divide(float s)
		{
			return Vec3(x / s, y / s, z / s);
		}

		T dotProduct(const Vec3& v)
		{
			return ((x * v.x) + (y * v.y) + (z * v.z));
		}

		Vec3 crossProduct(const Vec3& v)
		{
			T ni = y * v.z - z * v.y;
			T nj = z * v.x - x * v.z;
			T nk = x * v.y - y * v.x;
			return Vec3(ni, nj, nk);
		}

		T magnitude()
		{
			return std::sqrt(magnitude_sqr());
		}

		T magnitude_sqr()
		{
			return (x * x) + (y * y) + (z * z);
		}

		Vec3& normalize()
		{
			if (magnitude() == 0)
				return *this;
			*this /= magnitude();
			return *this;
		}

	};

	typedef Vec3<int> Vec3i;
	typedef Vec3<float> Vec3f;
	typedef Vec3<double> Vec3d;

}
