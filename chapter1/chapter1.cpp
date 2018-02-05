// chapter1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>

int main()
{
	int nx = 200;
	int ny = 100;

	float r, g, b;
	int nr, ng, nb;

	std::ofstream out("out.ppm");

	out << "P3\n" << nx << " " << ny << "\n255\n";
	for (int j = ny - 1; j >= 0; j--)
	{
		for (int i = 0; i < nx; i++)
		{
			r = float(i) / float(nx);
			g = float(j) / float(ny);
			b = 0.2;

			nr = (int)(255.99*r);
			ng = (int)(255.99*g);
			nb = (int)(255.99*b);

			out << nr << " " << ng << " " << nb << "\n";
		}
	}
	return 0;
}


