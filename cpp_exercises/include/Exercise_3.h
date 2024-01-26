#pragma once
#ifndef __EX_3_H__
#define __EX_3_H__ 1

#include <stdio.h>
#include <stdlib.h>

namespace EX3 {

	enum characters
	{

		MARIO,
		SONIC,
		KIRBY,
		LINK

	};

	enum screens
	{

		LOAD,
		SAVE,
		CLOSE

	};

	class Exercise3
	{

	public:

		Exercise3();
		~Exercise3();

		void ex1();
		void ex2();
		void ex3();

	private:

	};

}

#endif