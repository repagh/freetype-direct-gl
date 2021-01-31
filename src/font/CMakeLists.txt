SET(font_hdr
  font_manager.h
  font.h
  font_impl.h
  glyph.h
  glyph_impl.h
  glyph_compiler.h
  cu2qu.h)

SET(font_src
  font_manager.cxx
  font_impl.cxx
  glyph_impl.cxx
  glyph_compiler.cxx
  cu2qu.cxx
  ${font_hdr}
)

ADD_LIBRARY(font OBJECT
  ${font_src}
)

TARGET_INCLUDE_DIRECTORIES(font PRIVATE
  ${FREETYPE_INCLUDE_DIRS}
  ${FONTCONFIG_INCLUDE_DIR}
  "../utils"
)

INSTALL(FILES ${font_hdr}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/freetype-direct-gl)
