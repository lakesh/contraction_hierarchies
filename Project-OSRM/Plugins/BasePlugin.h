/*
    open source routing machine
    Copyright (C) Dennis Luxen, 2010

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU AFFERO General Public License as published by
the Free Software Foundation; either version 3 of the License, or
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU Affero General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
or see http://www.gnu.org/licenses/agpl.txt.
 */

#ifndef BASEPLUGIN_H_
#define BASEPLUGIN_H_

#include <cassert>
#include <string>
#include <vector>

#include "RouteParameters.h"
#include "../Server/BasicDatastructures.h"

class BasePlugin {
public:
	BasePlugin() { }
	//Maybe someone can explain the pure virtual destructor thing to me (dennis)
	virtual ~BasePlugin() { }
	virtual std::string GetDescriptor() const = 0;
	virtual std::string GetVersionString() const = 0 ;
	virtual void HandleRequest(const RouteParameters & routeParameters, http::Reply& reply) = 0;
};

#endif /* BASEPLUGIN_H_ */
