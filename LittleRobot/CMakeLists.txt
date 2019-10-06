# CMakeList.txt: CMake-Projekt für "LittleRobot". Schließen Sie die Quelle ein, und definieren Sie
# projektspezifische Logik hier.
#
cmake_minimum_required (VERSION 3.8)

project("LittleRobotMain")

# Fügen Sie der ausführbaren Datei dieses Projekts eine Quelle hinzu.
add_executable (${PROJECT_NAME} "LittleRobot.cpp" "LittleRobot.h")

target_link_libraries(${PROJECT_NAME} vision::SuperSonic)

# TODO: Fügen Sie bei Bedarf Tests hinzu, und installieren Sie Ziele.
