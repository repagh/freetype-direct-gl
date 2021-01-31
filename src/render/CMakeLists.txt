SET(render_hdr render.h)
SET(render_src
  render.cxx ${render_hdr}
)

ADD_LIBRARY(render OBJECT ${render_src})
SET_TARGET_PROPERTIES(render PROPERTIES LINKER_LANGUAGE CXX)

TARGET_INCLUDE_DIRECTORIES(render PRIVATE
  "../text"
  "../font"
  "../utils"
  "../viewport"
  ${FREETYPE_INCLUDE_DIRS}
  ${GLM_INCLUDE_DIR}
)

INSTALL(FILES ${render_hdr}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/freetype-direct-gl)
