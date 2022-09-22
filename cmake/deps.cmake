if(DEFINED ENV{ARTIFACTS_DIR})
  set(ARTIFACTS_DIR "$ENV{ARTIFACTS_DIR}")
else()
  message(WARNING "ARTIFACTS_DIR env var not defined, abort")
endif()

# googletest
if(ANDROID)
  set(GTest_DIR "${ARTIFACTS_DIR}/googletest/1.11.0/android-arm64/lib/cmake/GTest" CACHE PATH "Directory that contains GTestConfig.cmake")
elseif(CMAKE_SYSTEM_NAME MATCHES "Linux")
  set(GTest_DIR "${ARTIFACTS_DIR}/googletest/1.11.0/linux-x64/lib/cmake/GTest" CACHE PATH "Directory that contains GTestConfig.cmake")
elseif(CMAKE_SYSTEM_NAME MATCHES "Windows")
  message(WARNING "GTest_DIR not set yet")
else()
  message(WARNING "GTest_DIR not set yet")
endif()
message(STATUS ">>> GTest_DIR is: ${GTest_DIR}")
find_package(GTest REQUIRED)


# opencv
if(ANDROID)
  set(OpenCV_DIR "${ARTIFACTS_DIR}/opencv/android-arm64/4.5.4/sdk/native/jni" CACHE PATH "")
elseif(CMAKE_SYSTEM_NAME MATCHES "Linux")
  set(OpenCV_DIR "${ARTIFACTS_DIR}/opencv/linux-x64/4.5.5/lib/cmake/opencv4" CACHE PATH "")
elseif(CMAKE_SYSTEM_NAME MATCHES "Windows")
  message(WARNING "OpenCV_DIR not set yet")
else()
  message(WARNING "OpenCV_DIR not set yet")
endif()
message(STATUS ">>> OpenCV_DIR is: ${OpenCV_DIR}")
find_package(OpenCV REQUIRED)


