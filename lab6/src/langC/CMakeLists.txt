cmake_minimum_required(
    VERSION 3.13
    FATAL_ERROR
)

add_executable(
    main
    src/main.c
    src/main.h
    src/analyzer/analyzer.c
    src/analyzer/analyzer.h
    src/hashtable/hashtable.c
    src/hashtable/hashtable.h
    src/list/list.c
    src/list/list.h
)

target_link_libraries(
    main
)
