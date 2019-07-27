#include <iostream>
#include "include/calpal/calpal.h"

int main()
{
	using namespace calpal::maths;

	complex c1(1.0f, 1.0f);
	complex c2(1.0f, 1.0f);
	vec2 v1(1.0f, 2.0f);
	vec2 v2(2.0f, 1.0f);
	vec3 v3(1.0f, 1.0f, 1.0f);
	vec3 v4(2.0f, 2.0f, 2.0f);
	vec4 v5(1.0f, 1.0f, 1.0f, 1.0f);
	vec4 v6(2.0f, 2.0f, 2.0f, 2.0f);

	mat4 matrix1(1.0f); // Diagonal matrix with 1.0f at diagonal i.e. identity matrix
	mat4 matrix2(mat4::translation(vec3(1.0f, 1.0f, 1.0f))); // Translation matrix that when multiplied with a vec3, translates it by 1.0f units in each 3D direction.

	std::cout << "c1 = " << c1 << std::endl;
	std::cout << "c2 = " << c2 << std::endl;
	std::cout << "v1 = " << v1 << std::endl;
	std::cout << "v2 = " << v2 << std::endl;
	std::cout << "v3 = " << v3 << std::endl;
	std::cout << "v4 = " << v4 << std::endl;
	std::cout << "v5 = " << v5 << std::endl;
	std::cout << "v6 = " << v6 << std::endl;

	std::cout << "\nc1 + c2 = " << complex(c1 + c2) << std::endl;
	std::cout << "c1 - c2 = " << complex(c1 - c2) << std::endl;
	std::cout << "c1 * c2 = " << complex(c1 * c2) << std::endl;
	std::cout << "c1 / c2 = " << complex(c1 / c2) << std::endl;

	std::cout << "\nv1 + v2 = " << vec2(v1 + v2) << std::endl;
	std::cout << "v1 - v2 = " << vec2(v1 - v2) << std::endl;
	std::cout << "v1 * v2 = " << vec2(v1 * v2) << std::endl;
	std::cout << "v1 / v2 = " << vec2(v1 / v2) << std::endl;

	std::cout << "\nv3 + v4 = " << vec3(v3 + v4) << std::endl;
	std::cout << "v3 - v4 = " << vec3(v3 - v4) << std::endl;
	std::cout << "v3 * v4 = " << vec3(v3 * v4) << std::endl;
	std::cout << "v3 / v4 = " << vec3(v3 / v4) << std::endl;

	std::cout << "\nv5 + v6 = " << vec4(v5 + v6) << std::endl;
	std::cout << "v5 - v6 = " << vec4(v5 - v6) << std::endl;
	std::cout << "v5 * v6 = " << vec4(v5 * v6) << std::endl;
	std::cout << "v5 / v6 = " << vec4(v5 / v6) << std::endl;
}
