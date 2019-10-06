#Set the project name
project ("vision")

add_library(${PROJECT_NAME} "super_sonic.cpp")

add_library(vision::SuperSonic ALIAS ${PROJECT_NAME})

# If headers are separated and describing a public interface:
#target_include_directories( ${PROJECT_NAME}
#    PUBLIC ${PROJECT_SOURCE_DIR}/include
#)
