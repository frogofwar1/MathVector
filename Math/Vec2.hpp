#pragma once
#include <string>

namespace cw
{

	template<class T>
	class Vec2
	{
	public:
		T x;
		T y;

		Vec2() : x(0), y(0) {}
		Vec2(T x, T y) : x(x), y(y) {}
		Vec2(const Vec2& v) : x(v.x), y(v.y) {}

		~Vec2() {};


		Vec2& operator=(const Vec2& v)
		{
			x = v.x;
			y = v.y;
			return *this;
		}


		Vec2 operator+(const Vec2& v)
		{
			return Vec2(x + v.x, y + v.y);
		}
		Vec2 operator-(const Vec2& v)
		{
			return Vec2(x - v.x, y - v.y);
		}


		Vec2 operator+(float s)
		{
			return Vec2(x + s, y + s);
		}
		Vec2 operator-(float s)
		{
			return Vec2(x - s, y - s);
		}
		Vec2 operator*(float s)
		{
			return Vec2(x * s, y * s);
		}
		Vec2 operator/(float s)
		{
			return Vec2(x / s, y / s);
		}


		Vec2& operator+=(const Vec2& v)
		{
			x += v.x;
			y += v.y;
			return *this;
		}
		Vec2& operator-=(const Vec2& v)
		{
			x -= v.x;
			y -= v.y;
			return *this;
		}


		Vec2& operator+=(float s) 
		{
			x += s;
			y += s;
			return *this;
		}
		Vec2& operator-=(float s) 
		{
			x -= s;
			y -= s;
			return *this;
		}
		Vec2& operator*=(float s) 
		{
			x *= s;
			y *= s;
			return *this;
		}
		Vec2& operator/=(float s) 
		{
			x /= s;
			y /= s;
			return *this;
		}


		Vec2 add(const Vec2& v)
		{
			return Vec2(x + v.x, y + v.y);
		}
		Vec2 subtract(const Vec2& v) 
		{
			return Vec2(x - v.x, y - v.y);
		}


		Vec2 add(float s)
		{
			return Vec2(x + s, y + s);
		}
		Vec2 subtract(float s)
		{
			return Vec2(x - s, y - s);
		}
		Vec2 mul(float s)
		{
			return Vec2(x * s, y * s);
		}
		Vec2 divide(float s)
		{
			return Vec2(x / s, y / s);
		}
		
		T dotProduct(const Vec2& v)
		{
			return ((x * v.x) + (y * v.y));
		}

		T crossProduct(const Vec2& v)
		{
			return ((x * v.y) - (y * v.x));
		}

		T magnitude() 
		{
			return std::sqrt(magnitude_sqr());
		}

		T magnitude_sqr() 
		{
			return (x * x) + (y * y);
		}

		Vec2& normalize() 
		{
			if (magnitude() == 0) 
				return *this;
			*this /= magnitude();
			return *this;
		}

		/*bool operator==(const Vec2& v)
		{
			return ((x == v.x) && (y == v.y));
		}

		bool operator!=(const Vec2& v)
		{
			return (*this != v);
		}*/

	};

	template <class T>
	Vec2<T> operator*(T s, const Vec2<T>& v)
	{
		return Vec2<T>(v.x * s, v.y * s);
	}

	/*template<class T> 
	T DotProduct(const Vec2<T>& a, const Vec2<T>& b)
	{
		return ((a.x * b.x) + (a.y * b.y));
	}*/


	/*template<class T> 
	Vec2<T> CrossProduct(const Vec2<T>& a, const Vec2<T>& b)
	{
		return ((a.x * b.y) - (a.y * b.x));
	}*/

	typedef Vec2<int> Vec2i;
	typedef Vec2<float> Vec2f;
	typedef Vec2<double> Vec2d;

}
