// chapter2.cpp : Defines the entry point for the console application.
//

#include <fstream>
#include "vec3.h"

int main()
{
	int nx = 200;
	int ny = 100;

	std::ofstream out("out.ppm");

	out << "P3\n" << nx << " " << ny << "\n255\n";
	for (int j = ny - 1; j >= 0; j--)
	{
		for (int i = 0; i < nx; i++)
		{
			vec3 color = vec3( float(i) / float(nx), float(j) / float(ny),0.2) * 255.99;
			out << (int)color.r() << " " << (int)color.g() << " " << (int)color.b() << "\n";
		}
	}
	return 0;
}