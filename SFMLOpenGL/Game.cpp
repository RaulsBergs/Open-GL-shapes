#include <Game.h>

Game::Game() : window(VideoMode(800, 600), "OpenGL")
{
}
Game::~Game() {}

void Game::run()
{
	initialize();

	Event event;

	while (isRunning) {

		cout << "Game running..." << endl;

		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				isRunning = false;
			}
		}
		update();
		draw();
	}
}

void Game::initialize()
{
	isRunning = true;
}

void Game::update()
{
	cout << "Update up" << endl;
}

void Game::draw()
{
	cout << "Draw up" << endl;
	glClearColor(1.0f, 0.0f, 0.0f, 0.0f);

	glBegin(GL_POINTS);
	{
		glColor3f(0.0f, 1.0f, 0.0f);
		glVertex3f(0.1, 0.1, 0.1);
		glVertex3f(0.2, 0.3, 0.1);
	}
	glEnd();

	glBegin(GL_LINE_STRIP);
	{
		glColor3f(0.0f, 1.0f, 0.0f);
		glVertex3f(-1.0, 0.8, 0.0);
		glVertex3f(1.0, -0.7, 0.0);
	}
	glEnd();

	glBegin(GL_POLYGON);
	{
		glColor3f(1.0f, 0.0f, 1.0f);
		glVertex3f(0.3, 0.5, 0.0);
		glVertex3f(0.7, 0.25, 0.0);
		glVertex3f(0.50, -0.25, 0.0);
		glColor3f(0.0f, 1.0f, 0.0f);
		glVertex3f(0.05, -0.25, 0.0);
		glVertex3f(-0.1, 0.25, 0.0);
	}
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	{
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex3f(-1.0, -0.5, 0.0);
		glColor3f(0.0f, 1.0f, 0.0f);
		glVertex3f(-0.9, -1, 0.0);
		glColor3f(0.0f, 0.0f, 1.0f);
		glVertex3f(-0.8, -0.5, 0.0);
		glColor3f(0.0f, 1.0f, 0.0f);
		glVertex3f(-0.7, -1.0, 0.0);
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex3f(-0.6, -0.5, 0.0);
	}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	{
		glColor3f(0.0f, 0.45f, 0.0f);
		glVertex3f(-1.0, 1.0, 0.0);
		glVertex3f(-0.7, 0.70, 0.0);
		glColor3f(0.0f, 1.0f, 0.62f);
		glVertex3f(-0.85, 0.5, 0.0);
		glVertex3f(-0.5, 0.3, 0.0);
		glVertex3f(0.0, 0.70, 0.0);
	}
	glEnd();

	glBegin(GL_TRIANGLES);
	{
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex3f(-0.5, 0.25, 0.25);
		glVertex3f(-0.25, -0.25, 0.0);
		glVertex3f(-0.75, -0.25, 0.0);
	}
	glEnd();
	window.display();
}

void Game::unload()
{
	cout << "Cleaning up" << endl;
}

