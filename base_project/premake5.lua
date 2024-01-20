workspace "Workspace"
  language "C++"
  
  location("./build")
  
  platforms {
    "Win64"
  }

  configurations {
    "Debug",
    "Release"
  }

  flags {
    "MultiProcessorCompile"
  }

  includedirs {
    "./include",
  }

  filter "configurations:Debug"
    defines { "DEBUG" }
    symbols "On"

  filter "configurations:Release"
    defines { "NDEBUG" }
    optimize "On"

project "CPP_PROJECT"
  kind "StaticLib"
  location("./build/CPP_PROJECT")
  targetdir "./bin"

  files {

    --our classes

    "./src/**.c*",
    "./include/**.h"
  }