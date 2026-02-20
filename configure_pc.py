import configure

BUILD_LIBS = {
    "mtx",
    "machine",
    "framework",
    "c",
    "SSystem",
    "dolzel2",
    "Z2AudioLib",
    "DynamicLink",
    
    # JSystem libs
    "JKernel",
    "JSupport",
    "JGadget",
    "JUtility",
    "J2DGraph",
    "J3DGraphBase",
    "J3DGraphAnimator",
    "J3DGraphLoader",
    "JMath",
    "JFramework",
    "J3DU",
    "JParticle",
    "JStage",
    "JStudio",
    "JStudio_JStage",
    "JStudio_JAudio2",
    "JStudio_JParticle",
    #"JStudioCameraEditor",
    #"JStudioPreviewer",
    #"JStudioToolLibrary",
    "JAudio2",
    "JAWExtSystem",
    "JMessage",
}

def main():
    config = configure.config

    with open("decompiled.cmake", "w", encoding="utf-8") as f:
        # f.write("set(CMAKE_CXX_STANDARD 03)\n")

        for lib in config.libs:
            lib_name = lib.get("lib")
            if lib_name not in BUILD_LIBS:
                continue

            f.write(f"add_library({lib_name})\n")

            f.write(f"target_sources({lib_name} PRIVATE\n")
            for obj in lib["objects"]:
                if obj.matching:
                    f.write(f"    src/{obj.path}\n")
            f.write(f")\n")

            for obj in lib["objects"]:
                if obj.matching and not obj.path.endswith(".cpp"):
                    f.write(f"set_source_files_properties(src/{obj.path} PROPERTIES LANGUAGE CXX)\n")

            f.write(f"target_include_directories({lib_name} PRIVATE src/)\n")
            f.write(f"target_include_directories({lib_name} SYSTEM PRIVATE include/)\n")
            f.write(f"target_include_directories({lib_name} SYSTEM PRIVATE include/dolphin/)\n")
            f.write(f"target_include_directories({lib_name} SYSTEM PRIVATE assets/GZ2E01/)\n")
            f.write(f"target_include_directories({lib_name} SYSTEM PRIVATE build_ack/include/)\n")
            f.write(f"target_link_libraries(Tppc PRIVATE {lib_name})\n")


if __name__ == "__main__":
    main()
