add_subdirectory(gtest-1.16)

set(GTEST "${CMAKE_CURRENT_LIST_DIR}/gtest-1.16")

file(GLOB TEST_SRC "${CMAKE_CURRENT_LIST_DIR}/src/*.cpp")
foreach(test ${TEST_SRC})
    get_filename_component(test_name ${test} NAME_WE)
    add_executable(${test_name} ${test})

    target_include_directories(
            ${test_name} PUBLIC
            "${GTEST}/googlemock/include"
            "${GTEST}/googletest/include"
            "${PROJECT_SOURCE_DIR}/project/include"
    )
    target_link_directories(
            ${test_name} PUBLIC
            "${GTEST}/build/lib"
    )
    target_link_libraries(
            ${test_name} PUBLIC
            "gtest" "gtest_main" "algo"
    )
    add_test(NAME ${test_name} COMMAND ${test_name})
endforeach(test)
