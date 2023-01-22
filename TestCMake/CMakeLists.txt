# CMakeList.txt: projeto de CMake para TestCMake, incluir origem e definir
# lógica específica a um projeto aqui.
#

# Adicione a origem ao executável deste projeto.
add_executable (TestCMake "TestCMake.cpp" "TestCMake.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET TestCMake PROPERTY CXX_STANDARD 20)
endif()

# TODO: Adicione testes e instale destinos, se necessário.
