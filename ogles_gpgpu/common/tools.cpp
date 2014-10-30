#include "tools.h"

#include "common_includes.h"

using namespace ogles_gpgpu;
using namespace std;

void Tools::checkGLErr(const char *msg) {
	GLenum err = glGetError();
	if (err != GL_NO_ERROR) {
        cerr << msg << " - GL error " << err << " occurred" << endl;
	}
}