#pragma once

namespace calpal
{
	namespace maths
	{
		struct value
		{
			int ID;

			value();
			~value();
		};

		value::value()
		{
			static int s = 0;
			ID = ++s;
		}

		value::~value()
		{
		}
	}
}
