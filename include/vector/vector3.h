#pragma once

template<class T> struct Vector3
{
	T x, y, z;

	template<class T2> Vector3<T>& operator=(const Vector3<T2> & p)
	{
		x = p.x;
		y = p.y;
		z = p.z;
		return *this;
	}
	template<class T> Vector3<T>& operator+=(const Vector3<T> & p)
	{
		x += p.x;
		y += p.y;
		z += p.z;
		return *this;
	}
	template<class T> Vector3<T>& operator-=(const Vector3<T> & p)
	{
		x -= p.x;
		y -= p.y;
		z -= p.z;
		return *this;
	}
	template<class T> Vector3<T>& operator*=(const T q)
	{
		x *= q;
		y *= q;
		z *= q;
		return *this;
	}
	template<class T> Vector3<T>& operator/=(const T q)
	{
		x /= q;
		y /= q;
		z /= q;
		return *this;
	}
};

template<class T> Vector3<T> operator+(const Vector3<T> & p1, const Vector3<T> & p2)
{
	return{ p1.x + p2.x, p1.y + p2.y, p1.z + p2.z };
}
template<class T> Vector3<T> operator-(const Vector3<T> & p1, const Vector3<T> & p2)
{
	return{ p1.x - p2.x, p1.y - p2.y, p1.z - p2.z };
}
template<class T> Vector3<T> operator*(const Vector3<T> & p1, const T q)
{
	return{ p1.x * q, p1.y * q, p1.z * q };
}
template<class T> Vector3<T> operator/(const Vector3<T> & p1, const T q)
{
	return{ p1.x / q, p1.y / q, p1.z / q };
}

#ifdef LGEO_IO
template<class T> std::ofstream & operator<<(std::ofstream & o, const Vector3<T> & v)
{
	o << v.x << ' ' << v.y << ' ' << v.z;
	return o;
}
template<class T> std::ostream & operator<<(std::ostream & o, const Vector3<T> & v)
{
	o << "x:" << v.x << " y:" << v.y << " z:" << v.z;
	return o;
}
template<class T> std::istream & operator>>(std::istream & i, Vector3<T> & v)
{
	i >> v.x >> v.y >> v.z;
	return i;
}
#endif

typedef Vector3<float> Vector3F;
typedef Vector3<short> Vector3S;
typedef Vector3<unsigned short> Vector3US;
typedef Vector3<unsigned int> Vector3UI;
typedef Vector3<int> Vector3I;
typedef Vector3<unsigned long> Vector3UL;
typedef Vector3<long> Vector3L;
typedef Vector3<unsigned long long> Vector3ULL;
typedef Vector3<long long> Vector3LL;
typedef Vector3<double> Vector3D;