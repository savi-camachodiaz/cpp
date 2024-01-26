workspace "Workspace"
  language "C++"
  location("./build")
  configurations { "Debug", "Release" }
  platforms { "Win32", "x64" }

  defines {"_CRT_SECURE_NO_WARNINGS", "_CRT_SECURE_NO_DEPRECATE", "_CRT_NONSTDC_NO_DEPRECATE"}
  
  filter { "platforms:Win32" }
    system "Windows"
    architecture "x86"

  filter { "platforms:x64" }
    system "Windows"
    architecture "x86_64"

  flags {
    "MultiProcessorCompile"
  }

project "CPP_PROJECT"
  kind "StaticLib"
  location("./build/CPP_PROJECT")
  targetdir "./bin"

  files {
    "./src/**.c*",
    "./include/**.h"
  }

  includedirs {
    "./include",
  }

  filter "configurations:Debug"
    defines { "_DEBUG" }
    symbols  'On'

  filter "configurations:Release"
    defines { "_NDEBUG" }
    optimize 'On'

project "CPP_APP"
  location("./examples/cpp_app")
  kind "ConsoleApp"
  targetdir "./bin/Cpp_App/"
  
  files {
    "./src/**.c*",
    "./include/**.h"
  }
  
  includedirs {
    "./include",
  }
  
  links {
    "CPP_PROJECT",
  }