#include "src\graphics\window.h"

int main()
{
	using namespace Engine;
	using namespace graphics;

	Window window("Engine", 800, 600);


	glClearColor(0.2f, 0.4f, 0.8f, 1.0f);

	while (!window.closed())
	{
		window.clear();
		std::cout << input::Mouse::GetInstance().GetX() << " | ";
		std::cout << input::Mouse::GetInstance().GetY() << std::endl;
		glBegin(GL_QUADS);
		glVertex2f(-0.5f, -0.5);
		glVertex2f(-0.5f, 0.5);
		glVertex2f(0.5f, 0.5);
		glVertex2f(0.5f, -0.5);
		glEnd();
		window.update();
	}
	return 0;
}
