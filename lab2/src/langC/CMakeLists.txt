cmake_minimum_required(
    VERSION 3.13
    FATAL_ERROR
)

add_executable(
    main
    src/main.c
    src/main.h
    src/lab/lab.c
    src/lab/lab.h
    src/gradXYZ/gradXYZ.c
    src/gradXYZ/gradXYZ.h
    src/option_5/option_5.c
    src/option_5/option_5.h
)

target_link_libraries(
    main
    -lm
)
