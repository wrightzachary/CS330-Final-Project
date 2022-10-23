#include "SceneBuilder.h"
#include "ShapeBuilder.h"
#include "Mesh.h"

using namespace std;


void SceneBuilder::UBuildScene(vector<GLMesh>& scene)
{
	// seed the rand() function once
	srand(time(nullptr));

	// PEN BODY
	GLMesh cyl_gMesh01;
	cyl_gMesh01.p = {
		1.0f, 1.0f, 1.0f, 1.0f,
		0.25f, 1.0f, 0.25f,
		-90.0f, 1.0f, 0.0f, 0.0f,
		0.0f, 0.0f, 1.0f, 0.0f,
		0.0f, 0.0f, 0.0f, 1.0f,
		0.0f, 0.10f, 3.0f,
		1.0f, 1.0f
	};
	cyl_gMesh01.height = 4.0f;
	cyl_gMesh01.radius = 0.5f;
	cyl_gMesh01.number_of_sides = 128.0f;
	cyl_gMesh01.texFilename = "textures\\black.png";
	ShapeBuilder::UBuildCylinder(cyl_gMesh01);
	scene.push_back(cyl_gMesh01);



	// PEN CLIP
	GLMesh cyl_gMesh02;
	cyl_gMesh02.p = {
		1.0f, 1.0f, 1.0f, 1.0f,
		0.25f, 1.0f, 0.02f,
		-90.0f, 1.0f, 0.0f, 0.0f,
		-45.0f, 0.0f, 1.0f, 0.0f,
		0.0f, 0.0f, 0.0f, 1.0f,
		-0.063f, 0.22f, 2.5f,
		1.0f, 1.0f
	};
	cyl_gMesh02.height = 1.5f;	cyl_gMesh02.radius = 0.4f;	cyl_gMesh02.number_of_sides = 16.0f;
	cyl_gMesh02.texFilename = "textures\\grey.png";
	ShapeBuilder::UBuildCylinder(cyl_gMesh02);
	scene.push_back(cyl_gMesh02);



	// PEN CLICKER
	GLMesh cyl_gMesh03;
	cyl_gMesh03.p = {
		1.0f, 1.0f, 1.0f, 1.0f,
		0.25f, 1.0f, 0.25f,
		-90.0f, 1.0f, 0.0f, 0.0f,
		0.0f, 0.0f, 1.0f, 0.0f,
		0.0f, 0.0f, 0.0f, 1.0f,
		0.0f, 0.10f, 3.05f,
		1.0f, 1.0f
	};

	cyl_gMesh03.height = 3.0f;	cyl_gMesh03.radius = 0.45f;	cyl_gMesh03.number_of_sides = 128.0f;
	cyl_gMesh03.texFilename = "textures\\grey.png";
	ShapeBuilder::UBuildCylinder(cyl_gMesh03);
	scene.push_back(cyl_gMesh03);


	// PEN TIP
	GLMesh con_gMesh01;
	con_gMesh01.p = {
		1.0f, 1.0f, 1.0f, 1.0f,
		0.25f, 0.5f, 0.25f,
		-90.0f, 1.0f, 0.0f, 0.0f,
		0.0f, 0.0f, 1.0f, 0.0f,
		0.0f, 0.0f, 0.0f, 1.0f,
		0.0f, 0.10f, -1.0f,
		1.0f, 1.0f
	};
	con_gMesh01.height = 1.0f;	con_gMesh01.radius = 0.5f;	con_gMesh01.number_of_sides = 128.0f;
	con_gMesh01.texFilename = "textures\\grey.png";
	ShapeBuilder::UBuildCone(con_gMesh01);
	scene.push_back(con_gMesh01);



	// DESK
	GLMesh plan_gMesh01;
	plan_gMesh01.p = {
		1.0f, 1.0f, 1.0f, 1.0f,				// color r, g, b a
		16.0f, 2.0f, 16.0f,					// scale x, y, z
		0.0f, 1.0f, 0.0f, 0.0f,				// x amount of rotation, rotate x, y, z
		45.0f, 0.0f, 1.0f, 0.0f,			// y amount of rotation, rotate x, y, z
		0.0f, 0.0f, 0.0f, 1.0f,				// z amount of rotation, rotate x, y, z
		1.0f, 0.0f, 0.0f,					// translate x, y, z
		2.0f, 2.0f
	};
	plan_gMesh01.texFilename = "textures\\desk.png";
	ShapeBuilder::UBuildPlane(plan_gMesh01);
	scene.push_back(plan_gMesh01);


	// BOOK
	GLMesh book_gMesh01;
	book_gMesh01.p = {
		1.0f,	1.0f,	1.0f,	1.0f,
		8.0f,	0.1f,	6.0f,
		0.0f,	1.0f,	0.0f,	0.0f,
		55.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		0.0f,	0.0f,	0.0f,
		1.0f,	1.0f
	};
	book_gMesh01.texFilename = "textures\\notebook.jpg";
	ShapeBuilder::UBuildCube(book_gMesh01);
	scene.push_back(book_gMesh01);


	//HOLLOW CYLINDER FOR COFFEE MUG
	GLMesh hollow_cyl;
	hollow_cyl.p = {
		1.0f,	1.0f,	1.0f,	1.0f,
		2.0f,	2.0f,	2.0f,
		0.0f,	1.0f,	0.0f,	0.0f,
		-90.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		-4.0f,	0.0f,	3.0f,
		1.0f,	1.0f
	};
	hollow_cyl.texFilename = "textures\\green.png";
	hollow_cyl.innerRadius = 0.45f;
	hollow_cyl.radius = 0.5f;
	hollow_cyl.height = 1.0f;
	hollow_cyl.number_of_sides = 144.0f;
	ShapeBuilder::UBuildHollowCylinder(hollow_cyl);
	scene.push_back(hollow_cyl);

	// COFFEE
	GLMesh coffee;
	coffee.p = {
		1.0f,	1.0f,	1.0f,	1.0f,
		2.0f,	2.0f,	2.0f,
		0.0f,	1.0f,	0.0f,	0.0f,
		180.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		-4.0f,	1.9f,	5.0f,
		1.0f,	1.0f
	};
	coffee.radius = 0.45f;
	coffee.number_of_sides = 144.0f;
	coffee.texFilename = "textures\\coffee.png";
	ShapeBuilder::UBuildCircle(coffee);
	scene.push_back(coffee);


	// COFFEE MUG HANDLE
	GLMesh handle;
	handle.p = {
		1.0f,	1.0f,	1.0f,	1.0f,
		2.0f,	2.0f,	2.0f,
		90.0f,	1.0f,	0.0f,	0.0f,
		0.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		-5.0f,	2.0f,	4.0f,
		1.0f,	1.0f
	};
	handle.texFilename = "textures\\green.png";
	handle.innerRadius = 0.3f;
	handle.radius = 0.4f;
	handle.height = 0.1f;
	handle.number_of_sides = 144.0f;
	ShapeBuilder::UBuildHollowCylinder(handle);
	scene.push_back(handle);
}