#pragma once
#include<iostream>

#include "value.h"

namespace calpal
{
	namespace maths
	{
		struct complex;

		struct vec2 : public value
		{
			float x, y;

			vec2();
			vec2(const float &x, const float &y);

			vec2& add(const vec2 &other);
			vec2& subtract(const vec2 &other);
			vec2& multiply(const vec2 &other);
			vec2& divide(const vec2 &other);

			friend std::ostream& operator<<(std::ostream& stream, const vec2& vector);
			friend vec2& operator+(vec2 left, const vec2 &right);
			friend vec2& operator-(vec2 left, const vec2 &right);
			friend vec2& operator*(vec2 left, const vec2 &right);
			friend vec2& operator/(vec2 left, const vec2 &right);

			bool operator==(const vec2 &other);
			bool operator!=(const vec2 &other);

			vec2& operator+=(const vec2 &other);
			vec2& operator-=(const vec2 &other);
			vec2& operator*=(const vec2 &other);
			vec2& operator/=(const vec2 &other);
		};

		vec2::vec2()
		{
			x = 0.0f;
			y = 0.0f;
		}

		vec2::vec2(const float &x, const float & y)
		{
			this->x = x;
			this->y = y;
		}

		vec2 & vec2::add(const vec2 & other)
		{
			x += other.x;
			y += other.y;

			return *this;
		}

		vec2 & vec2::subtract(const vec2 & other)
		{
			x -= other.x;
			y -= other.y;

			return *this;
		}

		vec2 & vec2::multiply(const vec2 & other)
		{
			x *= other.x;
			y *= other.y;

			return *this;
		}

		vec2 & vec2::divide(const vec2 & other)
		{
			x /= other.x;
			y /= other.y;

			return *this;
		}

		bool vec2::operator==(const vec2 & other)
		{
			return ((x == other.x) && (y == other.y));
		}

		bool vec2::operator!=(const vec2 & other)
		{
			return !(*this == other);
		}

		vec2 & vec2::operator+=(const vec2 & other)
		{
			return add(other);
		}

		vec2 & vec2::operator-=(const vec2 & other)
		{
			return subtract(other);
		}

		vec2 & vec2::operator*=(const vec2 & other)
		{
			return multiply(other);
		}

		vec2 & vec2::operator/=(const vec2 & other)
		{
			return divide(other);
		}

		std::ostream& operator<<(std::ostream& stream, const vec2& vector)
		{
			stream << "vec2: (" << vector.x << ", " << vector.y << ")";
			return stream;
		}

		vec2 & operator+(vec2 left, const vec2 &right)
		{
			return left.add(right);
		}

		vec2 & operator-(vec2 left, const vec2 &right)
		{
			return left.subtract(right);
		}

		vec2 & operator*(vec2 left, const vec2 &right)
		{
			return left.multiply(right);
		}

		vec2 & operator/(vec2 left, const vec2 &right)
		{
			return left.divide(right);
		}
	}
}
