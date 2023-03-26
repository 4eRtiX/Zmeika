#include <iostream>
#define WIDTH 120
#define HEIGHT 30
using namespace std;

void TMAP() {
	char size[HEIGHT][WIDTH];

	for (int j = 0; j <= HEIGHT; j++)
	{
		for (int i = 0; i <= WIDTH; i++)
		{
			size[j][i] = ' ';
		}
		size[j][WIDTH] = '\0';
		cout << size[j][WIDTH];
	}
}

int main()
{
	TMAP();

	return 0;
}