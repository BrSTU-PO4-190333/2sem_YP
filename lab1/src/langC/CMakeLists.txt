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
    src/f/f.c
    src/f/f.h
    src/task0/task0.c
    src/task0/task0.h
    src/task1/task1.c
    src/task1/task1.h
    src/task2/task2.c
    src/task2/task2.h
)

target_link_libraries(
    main
    -lm
)
