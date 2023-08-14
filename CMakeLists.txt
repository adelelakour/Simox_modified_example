	PROJECT ( myDemo )
	FIND_PACKAGE(Simox REQUIRED)
	IF(Simox_USE_COIN_VISUALIZATION)
	  FILE(GLOB SRCS ${PROJECT_SOURCE_DIR}/GraspPlanner.cpp ${PROJECT_SOURCE_DIR}/MyGraspPlannerWindow.cpp)
	  FILE(GLOB INCS ${PROJECT_SOURCE_DIR}/GraspPlannerWindow.h)
	  set(GUI_MOC_HDRS ${PROJECT_SOURCE_DIR}/GraspPlannerWindow.h)
	  set(GUI_UIS ${PROJECT_SOURCE_DIR}/GraspPlanner.ui)
	  SimoxQtApplication(${PROJECT_NAME} "${SRCS}" "${INCS}" "${GUI_MOC_HDRS}" "${GUI_UIS}")
	  include_directories(${CMAKE_SOURCE_DIR}/include /usr/local/include/GraspPlanning/GraspPlanner)
	  find_library(COIN_LIBRARY NAMES Coin PATHS /usr/lib/x86_64-linux-gnu/)

	ENDIF()

