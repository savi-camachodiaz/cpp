#pragma once
#ifndef __EX_8_H__
#define __EX_8_H__ 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

namespace EX8 {

	class Exercise8
	{

	public:

		struct Vector
		{

			float x, y;

		};

		struct InfoPlayer
		{

			char name[16];
			int year;
			int maxScore;

		};

		Exercise8();
		~Exercise8();

		void ex1();
		void ex2();
		void ex3();

	private:

	};

}

#endif