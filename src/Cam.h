#pragma once
#include <iostream>
#include "stdafx.h"

using namespace std;

class Camara {
public:

	Camara() {
		angle_ver = 0.0;
		angle_hor = 0.0;
		vel_ratoli = 0.0;
		vel_moviment = 0.5;
	};

	float angle_ver = 0.0;

	float angle_hor = 0.0;

	float vel_ratoli = 1;

	float vel_moviment = 0.5;

	glm::vec3 posi;
	glm::vec3 front;
	glm::vec3 up;

	static Camara M_C;

	static Camara S_C;
};