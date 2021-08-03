#ifndef SIMULATION_UTILS_H
#define SIMULATION_UTILS_H

#include <iomanip>
#include <ctime>

namespace utils {

	std::string getCurrentTimestamp(const char *fmt) {
		auto t = std::time(nullptr);
		auto tm = *std::localtime(&t);

		std::ostringstream oss;
		oss << std::put_time(&tm, fmt);

		return oss.str();
	}

	std::string getCurrentTimestamp() {
		return getCurrentTimestamp("%d-%m-%Y %H-%M-%S");
	}

}

#endif //SIMULATION_UTILS_H
