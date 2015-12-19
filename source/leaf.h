// Copyright(c) 2016 René Hansen.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once

#include "component.h"

namespace Kompositum
{

class Leaf : public Component
{
public:
	Leaf(int64_t uid)
	: Component(uid)
	{
	}

private:

};

}
