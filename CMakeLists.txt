cmake_minimum_required(VERSION 3.16)

project(TmcHelpers LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(TmcHelpers STATIC


  strextra.h strextra.cpp tmc_global_prompts.h tmc_global_prompts.cpp tmc_global_types.h
  tmc_global_1to1_algos.h
  tmc_global_1to1_algos.cpp
  dynamicstructure.h dynamicstructure.cpp
  vectextra.h
  vectextra.cpp
  tmc_math.cpp
  tmc_math.h
)

target_compile_definitions(TmcHelpers PRIVATE TMCHELPERS_LIBRARY)
