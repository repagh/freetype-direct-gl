SET(text_hdr
  text_buffer.h
  color.h
  pen.h)

SET(text_src
  text_buffer.cxx
  ${text_hdr}
)

ADD_LIBRARY(text OBJECT ${text_src})
SET_TARGET_PROPERTIES(text PROPERTIES LINKER_LANGUAGE CXX)

TARGET_INCLUDE_DIRECTORIES(text PRIVATE
  "../font"
  "../utils"
  "../viewport"
  ${FREETYPE_INCLUDE_DIRS}
  ${GLM_INCLUDE_DIR}
)

INSTALL(FILES ${text_hdr}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/freetype-direct-gl)
