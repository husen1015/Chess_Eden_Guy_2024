#pragma once
#include <exception>

class Exception : public std::exception
{
public:
	const char* what() const noexcept override
	{
		return "This is an exception!";
	}
};