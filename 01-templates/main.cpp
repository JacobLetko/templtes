#include <iostream>
#include "person.h"

template<typename T>
T add(T x, T y)
{
	return x + y;
}
template<typename T>
T sub(T x, T y)
{
	return x - y;
}
template<typename T>
void print(T x)
{
	std::cout << x << std::endl;
}
template<typename T>
T min(T x, T y)
{
	return x < y ? x : y;
}
template<typename T>
T max(T x, T y)
{
	return x > y ? x : y;
}
template<typename T>
T clamp(T x, T low, T uper)
{
	if (x > low && x < uper)
		return x;
	else if (x < low)
		return low;
	else if (x > uper)
		return uper;
}
template<typename T>
void print(person me)
{
	print("age");
	print(me.age);
	print("name");
	print(me.name);
}
template<typename T>
void swap(T&x, T&y)
{
	x = x + y;
	y = x - y;
	x = x - y;
}

int main()
{
	//print(1);
	//print(1.2f);
	//print(true);

	//print(min(56,2));

	//print(max(56,2));
	//
	//print(clamp(5,0,10));

	//person me;
	//std::cin >> me.name;
	//std::cin >> me.age;

	//print<person>(me);

	print(min('a','b'));
	print(max('A', 'b'));

	while (true);
	return 0;
}