// Copyright Ren� Hansen 2016.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include "component.h"

#include <vector>

namespace Kompositum
{

class Composite : public Component
{
public:
	using Children = std::vector<Composite*>;

	Composite(int64_t uid)
	: Component(uid)
	{
	}

private:
	Children children;
};

}
