message("Processing MPAGSCipher subdirectory")

add_library(MPAGSCipher STATIC
  TransformChar.cpp
  ProcessCommandLine.cpp
  RunCaesarCipher.cpp
  CaesarCipher.cpp
  TransformChar.hpp
  ProcessCommandLine.hpp
  RunCaesarCipher.hpp
  CaesarCipher.hpp
  CipherMode.hpp
  )

target_include_directories(MPAGSCipher
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
  )

target_compile_features(MPAGSCipher
  PUBLIC cxx_std_17
  )