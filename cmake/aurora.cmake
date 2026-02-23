add_library(aurora_mtx STATIC IMPORTED GLOBAL)
target_include_directories(aurora_mtx SYSTEM INTERFACE "${AURORA_DIRECTORY}/include/")
set_target_properties(aurora_mtx PROPERTIES IMPORTED_LOCATION_DEBUG "${AURORA_DIRECTORY}/cmake-build-debug/aurora_mtx.lib")
set_target_properties(aurora_mtx PROPERTIES IMPORTED_LOCATION_RELEASE "${AURORA_DIRECTORY}/cmake-build-release/aurora_mtx.lib")
