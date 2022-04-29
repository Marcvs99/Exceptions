// Marcus King
// 4/29/2022
// CIS 1202.501

#include <iostream>
#include <cctype>

class InvalidCharacterException
{
};


class InvalidRangeException
{
};

char character(char start, int offset);

int main()
{
	
	try
	{
		std::cout << character('a', 1) << '\n';
	}
	catch (InvalidRangeException)
	{
		std::cout << "ERROR: InvalidRangeException" << '\n';
	}
	catch (InvalidCharacterException)
	{
		std::cout << "ERROR: InvalidCharacterException" << '\n';
	}

	try
	{
		std::cout << character('a', -1) << '\n';
	}
	catch (InvalidRangeException)
	{
		std::cout << "ERROR: InvalidRangeException" << '\n';
	}
	catch (InvalidCharacterException)
	{
		std::cout << "ERROR: InvalidCharacterException" << '\n';
	}

	try
	{
		std::cout << character('Z', -1) << '\n';
	}
	catch (InvalidRangeException)
	{
		std::cout << "ERROR: InvalidRangeException" << '\n';
	}
	catch (InvalidCharacterException)
	{
		std::cout << "ERROR: InvalidCharacterException" << '\n';
	}

	try
	{
		std::cout << character('?', 5) << '\n';
	}
	catch (InvalidRangeException)
	{
		std::cout << "ERROR: InvalidRangeException" << '\n';
	}
	catch (InvalidCharacterException)
	{
		std::cout << "ERROR: InvalidCharacterException" << '\n';
	}
		
	
	
}

char character(char start, int offset)
{
	int target = start + offset;

		if (start < 123 && start > 96)
		{
			if (target < 123 && target > 96)
			{
				return static_cast<char>(static_cast<int>(start) + offset);
			}
			else
			{
				throw InvalidRangeException();
			}
		}
		if (start < 91 && start > 64)
		{
			if (target < 91 && target > 64)
			{
				return static_cast<char>(static_cast<int>(start) + offset);
			}
			else
			{
				throw InvalidRangeException();
			}
		}
		else
		{
			throw InvalidCharacterException();
		}
	
	
	
}