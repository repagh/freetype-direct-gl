#ifndef __OPEN_GL_H__
#define __OPEN_GL_H__

#if defined(__APPLE__)
#define GL_SILENCE_DEPRECATION
#   include "TargetConditionals.h"
#   if TARGET_OS_SIMULATOR || TARGET_OS_IPHONE
#     if defined(FREETYPE_GL_ES_VERSION_3_0)
#       include <OpenGLES/ES3/gl.h>
#     else
#       include <OpenGLES/ES2/gl.h>
#     endif
#   else
#     include <OpenGL/gl3.h>
#   endif
#elif defined(_WIN32) || defined(_WIN64)
#  include <GL/glew.h>
#  include <GL/wglew.h>
#else
#  include <GL/glew.h>
#  include <GL/gl.h>
#endif

#endif /* OPEN_GL_H */
