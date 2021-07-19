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
    src/get_table_with_extremum/get_table_with_extremum.c
    src/get_table_with_extremum/get_table_with_extremum.h
    src/y/y.c
    src/y/y.h
)

target_link_libraries(
    main
    -lm
)
