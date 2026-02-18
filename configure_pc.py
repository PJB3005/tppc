import configure

def main():
    config = configure.config

    with open("decompiled.cmake", "w", encoding="utf-8") as f:
        for lib in config.libs:
            if lib.get("progress_category") != "sdk":
                continue

            lib_name = lib["lib"]

            if lib_name != "mtx":
                continue

            f.write(f"add_library({lib_name})\n")

            f.write(f"target_sources({lib_name} PRIVATE\n")
            for obj in lib["objects"]:
                f.write(f"    src/{obj}\n")
            f.write(f")\n")

            for obj in lib["objects"]:
                f.write(f"set_source_files_properties(src/{obj} PROPERTIES LANGUAGE CXX)\n")

            f.write(f"target_include_directories({lib_name} SYSTEM PRIVATE include/)\n")
            f.write(f"target_include_directories({lib_name} SYSTEM PRIVATE include/dolphin)\n")


if __name__ == "__main__":
    main()
