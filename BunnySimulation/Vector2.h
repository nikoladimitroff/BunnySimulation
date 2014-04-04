#ifndef VECTOR2_INCLUDE_GUARD
#define VECTOR2_INCLUDE_GUARD

#include <math.h>
#include <iostream>

class Vector2
{
private:
	float x;
	float y;


public:
	Vector2() : x(0), y(0)
	{ }

	Vector2(float x, float y) : x(x), y(y)
	{ }

	Vector2(const Vector2& other)
	{
		this->x = other.x;
		this->y = other.y;
	}

	float GetX() const
	{
		return this->x;
	}

	float GetY() const
	{
		return this->y;
	}

	void SetX(float x)
	{
		this->x = x;
	}

	void SetY(float y)
	{
		this->y = y;
	}

	Vector2 Add(const Vector2& other) const
	{
		return Vector2(this->x + other.x, this->y + other.y);
	}

	Vector2 Substract(const Vector2& other) const
	{
		return Vector2(this->x - other.x, this->y - other.y);
	}

	float GetLength() const
	{
		return sqrt(this->x * this->x + this->y * this->y);
	}

	float Dot(const Vector2& other) const
	{
		return this->x * other.x + this->y * other.y;
	}

	void Print() const
	{
		std::cout << "(" << this->x << ", " << this->y << ")";
	}

	Vector2& operator=(const Vector2& rhs)
	{
		if (this != &rhs)
		{
			this->x = rhs.x;
			this->y = rhs.y;
		}
		return *this;
	}

	Vector2& operator+=(const Vector2& other)
	{
		this->x += other.x;
		this->y += other.y;
		return *this;
	}

	Vector2& operator*=(float multiplier)
	{
		this->x *= multiplier;
		this->y *= multiplier;
		return *this;
	}

	Vector2& operator-=(const Vector2& other)
	{
		this->x -= other.x;
		this->y -= other.y;

		return *this;
	}

	Vector2& operator++()
	{
		*this += Vector2(1, 1);
		return *this;
	}

	Vector2& operator++(int dummy)
	{
		*this -= Vector2(1, 1);
		return *this;
	}
};

Vector2 operator+(const Vector2& first, const Vector2& second)
{
	Vector2 result;
	result += first;
	result += second;

	return result;
}

Vector2 operator+(const Vector2& first, int z)
{
	return first;
}

Vector2 operator-(const Vector2& first, const Vector2& second)
{
	return first.Substract(second);
}

float operator*(const Vector2& first, const Vector2& second)
{
	return first.Dot(second);
}

std::ostream& operator<<(std::ostream& stream, const Vector2& vec)
{
	stream << "(" << vec.GetX() << ", " << vec.GetY() << ")";

	return stream;
}

std::istream& operator>>(std::istream& stream, Vector2& vec)
{
	float x, y;
	stream >> x >> y;
	vec.SetX(x);
	vec.SetY(y);

	return stream;
}


#endif