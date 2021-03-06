/*
 * Phoenix2D (RoboCup Soccer Simulation 2D League)
 * Copyright (c) 2013 Ivan Gonzalez
 *
 * This file is part of Phoenix2D.
 *
 * Phoenix2D is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Phoenix2D is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Phoenix2D.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LOGGER_H_
#define LOGGER_H_

#include <string>

/*! @addtogroup phoenix_main
 * @{
 */
namespace Phoenix
{
/*!
 * @brief <STRONG> Logger <BR> </STRONG>
 * The Logger lorem Ipsum
 */
class Logger {
	bool logging;
public:
	Logger();
	~Logger();
	void log();
};
} // End namespace Phoenix
/*! @} */

#endif /* LOGGER_H_ */
