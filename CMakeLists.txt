# Little test for using Gaudi's Particle Properties

cmake_minimum_required(VERSION 3.15)

project(PartPropTest VERSION 0.1 
    LANGUAGES CXX
)

add_executable(main src/main.cxx)

# Now the Gaudi pieces
find_package(Gaudi REQUIRED)
include(GaudiToolbox)

add_subdirectory(PartPropTest)
add_subdirectory(GaudiHelloWorld)
