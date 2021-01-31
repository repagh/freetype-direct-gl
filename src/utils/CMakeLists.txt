SET(utils_hdr
  memory_buffer.h
  err_msg.h
  shader.h
  program.h
  char_width.h
)

SET(utils_src
  memory_buffer.cxx
  err_msg.cxx
  shader.cxx
  program_text_buffer.cxx program_render.cxx program.cxx
  program_render_background.cxx
  char_width.cxx
  ${utils_hdr}
)

ADD_LIBRARY(utils OBJECT ${utils_src})

TARGET_INCLUDE_DIRECTORIES(utils PRIVATE
  ${Boost_INCLUDE_DIRS}
  ${FREETYPE_INCLUDE_DIRS}
  ${OPENGL_INCLUDE_DIRS}
)

INSTALL(FILES ${utils_hdr}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/freetype-direct-gl)
