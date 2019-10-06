 ##############
  # Unit Tests
  ##############
  add_executable(runUnitTests testgtest.cpp testgtestmore.cpp)
  
  # Link test suit
  target_link_libraries(runUnitTests gtest_main)

  # Extra linking for the project.
  target_link_libraries(runUnitTests vision::SuperSonic)

  # This is so you can do 'make test' to see all your tests run, instead of
  # manually running the executable runUnitTests to see those specific tests.
  # This is also necessary to see and run the test e.g. in the Visual Studio Test Viewer
  add_test(NAME sometestgtest COMMAND runUnitTests)

  # You can also omit NAME and COMMAND. The second argument could be some other
  # test executable.
  #add_test(that-other-test-I-made runUnitTests)