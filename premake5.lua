--premake5.lua

workspace "2D OpenGL Renderer"
    filename "2D-OGL-Renderer"
    language "C++"
    location "2D-OGL-Renderer"
    configurations { "Debug", "Release" }
    platforms { "x86" }
    defines { "GLEW_STATIC" }
    links {
        "Dependencies/GLEW/glew32s.lib",
        "Dependencies/GLFW/GLFW_32/glfw3.lib",
        "opengl32.lib"
    }

project "Game"
    location "2D-OGL-Renderer/Game"
    kind "ConsoleApp"
    files
    {
        "2D-OGL-Renderer/Game/**.cpp",
        "2D-OGL-Renderer/Game/**.h",
        "2D-OGL-Renderer/Game/**.glsl",
        "2D-OGL-Renderer/Game/**.vert",
        "2D-OGL-Renderer/Game/**.frag",
    }
    targetdir "2D-OGL-Renderer/bin/Game/%{cfg.buildcfg}"
    objdir "2D-OGL-Renderer/bin/intermediates/Test/%{cfg.buildcfg}"

    links "2D-OGL-Renderer"
    includedirs { "2D-OGL-Renderer/2D-OGL-Renderer", "Dependencies/include" }

    filter "configurations:Debug"
        defines "DEBUG"
        symbols "On"
        optimize "Off"

    filter "configurations:Release"
        defines "RELEASE"
        symbols "Off"
        optimize "On"

project "2D-OGL-Renderer"
    location "2D-OGL-Renderer/2D-OGL-Renderer"
    kind "StaticLib"
    targetdir "2D-OGL-Renderer/bin/2D-OGL-Renderer/%{cfg.buildcfg}"
    objdir "2D-OGL-Renderer/bin/intermediates/2D-OGL-Renderer/%{cfg.buildcfg}"
    files
    {
        "2D-OGL-Renderer/2D-OGL-Renderer/**.cpp",
        "2D-OGL-Renderer/2D-OGL-Renderer/**.h",
        "2D-OGL-Renderer/2D-OGL-Renderer/**.glsl",
        "2D-OGL-Renderer/2D-OGL-Renderer/**.vert",
        "2D-OGL-Renderer/2D-OGL-Renderer/**.frag",
    }
    
    includedirs { "Dependencies/include" }

    filter "configurations:Debug"
        defines "DEBUG"
        symbols "On"
        optimize "Off"

    filter "configurations:Release"
        defines "RELEASE"
        symbols "Off"
        optimize "On"
