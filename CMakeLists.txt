# Little test for using Gaudi's Particle Properties

cmake_minimum_required(VERSION 3.15)

project(PartPropTest VERSION 0.1 
    LANGUAGES CXX
)

find_package(Gaudi)

add_executable(main src/main.cxx)
