add_library(mtx)
target_sources(mtx PRIVATE
    src/dolphin/mtx/mtx.c
    src/dolphin/mtx/mtxvec.c
    src/dolphin/mtx/mtx44.c
    src/dolphin/mtx/vec.c
    src/dolphin/mtx/quat.c
)
set_source_files_properties(src/dolphin/mtx/mtx.c PROPERTIES LANGUAGE CXX)
set_source_files_properties(src/dolphin/mtx/mtxvec.c PROPERTIES LANGUAGE CXX)
set_source_files_properties(src/dolphin/mtx/mtx44.c PROPERTIES LANGUAGE CXX)
set_source_files_properties(src/dolphin/mtx/vec.c PROPERTIES LANGUAGE CXX)
set_source_files_properties(src/dolphin/mtx/quat.c PROPERTIES LANGUAGE CXX)
target_include_directories(mtx SYSTEM PRIVATE include/)
target_include_directories(mtx SYSTEM PRIVATE include/dolphin)
