#pragma once
#ifndef __EX_10_H__
#define __EX_10_H__ 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

namespace EX10 {

	class Exercise10
	{

	public:

		struct Player
		{

			const char* name;
			unsigned int hp;

		};

		struct Weapon
		{

			const char* name;
			unsigned int dmg;

		};

		Exercise10();
		~Exercise10();

		void ex1();
		void ex2();
		void ex3();

	private:

	};

}

#endif