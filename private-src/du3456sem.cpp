/*

DU3456SEM.CPP

JY

Mlaskal's semantic interface for DU3-6

*/

#include "du3456sem.hpp"
#include "duerr.hpp"

namespace mlc {

	std::string to_uppercase(std::string input) {
		std::string output = "";
		for (int i = 0; i < input.length(); i++)
			output += std::toupper(input[i]);
		return output;
	}

	unsigned long string_to_uint(std::string input) {
		unsigned long long num = 0;
		int next;
		for (int i = 0; i < input.length(); i++)
		{
			if (('0' <= input[i]) && (input[i] <= '9')) {
				next = input[i] - '0';
				num *= 10;
				num += next;
			}
			else
			{
				return num;
			}

		}
		return num;
	}

};

/*****************************************/