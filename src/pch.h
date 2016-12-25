#if _DEBUG
#include <vld.h>
#pragma comment(lib, "glew32sd.lib")
#pragma comment(lib, "freeglut_staticd.lib")
#else
#pragma comment(lib, "glew32s.lib")
#pragma comment(lib, "freeglut_static.lib")
#endif

// C++
#include <iostream>
#include <string>

// Open GL

// GLM
#include "glm.hpp"

// GLEW
#include "GL/glew.h"

// Free GLUT
#include "GL/freeglut.h"

// SOIL
#include "SOIL.h"

// ASSIMP
#include "assimp\scene.h"

// Engine
#include "system_constants.h"