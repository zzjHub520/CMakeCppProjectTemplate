
add_executable(test_logger test_logger.cpp)

target_link_libraries(test_logger PRIVATE spdlog::spdlog)
target_link_libraries(test_logger PRIVATE rdkafka++)
target_link_libraries(test_logger PRIVATE gtest_main)
