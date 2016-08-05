#pragma once
#define PI 3.14159265359f

float comprimento(float temp_r) {
	return 2.0f * temp_r * PI;
}

float area(float temp_r) {
	return PI * (temp_r * temp_r);
}