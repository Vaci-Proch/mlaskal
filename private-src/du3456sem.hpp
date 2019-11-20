/*

	DU3456SEM.H

	DB

	Mlaskal's semantic interface for DU3-6

*/

#ifndef __DU3456SEM_H
#define __DU3456SEM_H

#include <string>
#include "literal_storage.hpp"
#include "flat_icblock.hpp"
#include "dutables.hpp"
#include "abstract_instr.hpp"
#include "gen_ainstr.hpp"

namespace mlc {
	std::string to_uppercase(std::string input);
	unsigned long string_to_uint(std::string input);
}

#endif
