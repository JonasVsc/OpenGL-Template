set(3RDPARTY_DIR ../3rdparty)
set(IMGUI_DIR ../3rdparty/imgui)

include_directories(${IMGUI_DIR})

include_directories(include)
include_directories(${3RDPARTY_DIR})

add_library(BREAKOUT_GAME
	"src/main.cpp"

	${3RDPARTY_DIR}/stb_image.h

	${IMGUI_DIR}/imgui.cpp
	${IMGUI_DIR}/imgui_demo.cpp
	${IMGUI_DIR}/imgui_draw.cpp
	${IMGUI_DIR}/imgui_tables.cpp
	${IMGUI_DIR}/imgui_widgets.cpp

	${IMGUI_DIR}/backends/imgui_impl_glfw.cpp
	${IMGUI_DIR}/backends/imgui_impl_opengl3.cpp
)

target_link_libraries(BREAKOUT_GAME ${OPENGL_LIBRARIES} glfw )
target_link_libraries(BREAKOUT_GAME libglew_static)
target_link_libraries(BREAKOUT_GAME glm)
target_link_libraries(BREAKOUT_GAME assimp)

# file(COPY ${CMAKE_SOURCE_DIR}/from_scratch/shaders DESTINATION ${CMAKE_BINARY_DIR})
