ADD_SUBDIRECTORY(font)
ADD_SUBDIRECTORY(text)
ADD_SUBDIRECTORY(render)
ADD_SUBDIRECTORY(utils)

ADD_LIBRARY(freetype_direct_gl
  $<TARGET_OBJECTS:font>
  $<TARGET_OBJECTS:text>
  $<TARGET_OBJECTS:render>
  $<TARGET_OBJECTS:utils>
)
set_target_properties(freetype_direct_gl PROPERTIES
  SOVERSION 0)
target_link_libraries(freetype_direct_gl ${GLEW_LIBRARIES})

TARGET_INCLUDE_DIRECTORIES(render PRIVATE
  ${FREETYPE_INCLUDE_DIRS}
)

configure_file(freetype-direct-gl.pc.in freetype-direct-gl.pc)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/freetype-direct-gl.pc
  DESTINATION ${CMAKE_INSTALL_LIBDIR}/pkgconfig)

install(TARGETS freetype_direct_gl
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
