#pragma once

#include "vec2.h"
#include "value.h"

namespace calpal
{
    namespace maths
    {
        struct complex : public vec2, public value
        {
			complex(float x, float y);
			~complex();

			complex& add(const complex& other);
			complex& subtract(const complex& other);
			complex& multiply(const complex& other);
			complex& divide(const complex& other);
			complex& toComplex(const vec2& other);

			friend std::ostream& operator<<(std::ostream& stream, const complex& complex);
			friend complex& operator+(complex left, const complex& right);
			friend complex& operator-(complex left, const complex& right);
			friend complex& operator*(complex left, const complex& right);
			friend complex& operator/(complex left, const complex& right);

			bool operator==(const complex& other);
			bool operator!=(const complex& other);

			complex& operator+=(const complex& other);
			complex& operator-=(const complex& other);
			complex& operator*=(const complex& other);
			complex& operator/=(const complex& other);
        };

		complex::complex(float x, float y)
			: vec2(x, y)
		{
		}

		complex::~complex()
		{
		}

		complex& complex::add(const complex& other)
		{
			return toComplex(vec2::add(other));
		}

		complex& complex::subtract(const complex& other)
		{
			return toComplex(vec2::subtract(other));
		}

		complex& complex::multiply(const complex &other)
        {
            float temp_x = x * other.x - y * other.y;
            float temp_y = x * other.y + y * other.x;

            x = temp_x;
            y = temp_y;

            return *this;
        }

		complex& complex::divide(const complex& other)
		{
			float temp_x = (((x) * (other.x)) + ((y) * (other.y))) / (pow(other.x, 2) + pow(other.y, 2));
			float temp_y = (((other.x) * (y)) - ((x) * (other.y))) / (pow(other.x, 2) + pow(other.y, 2));

			x = temp_x;
			y = temp_y;

			return *this;
		}

		complex& complex::toComplex(const vec2& other)
		{
			x = other.x;
			y = other.y;

			return *this;
		}

		std::ostream& operator<<(std::ostream& stream, const complex& complex)
		{
			stream << "complex: " << complex.x << " + " << complex.y << "i";

			return stream;
		}

		complex& operator+(complex left, const complex& right)
		{
			return left.add(right);
		}

		complex& operator-(complex left, const complex& right)
		{
			return left.subtract(right);
		}

		complex& operator*(complex left, const complex &right)
        {
            return left.multiply(right);
        }

		complex& operator/(complex left, const complex& right)
		{
			return left.divide(right);
		}

		inline bool complex::operator==(const complex& other)
		{
			return (x == other.x) && (y == other.y);
		}

		inline bool complex::operator!=(const complex& other)
		{
			return (x == other.x) && (y == other.y);
		}

		complex& complex::operator+=(const complex& other)
		{
			return add(other);
		}

		complex& complex::operator-=(const complex& other)
		{
			return subtract(other);
		}

		complex& complex::operator*=(const complex &other)
        {
            return multiply(other);
        }

		complex& complex::operator/=(const complex& other)
		{
			return divide(other);
		}
    }
}
