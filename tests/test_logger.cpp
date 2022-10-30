//
// Created by zzj on 2022/10/30.
//
#include "spdlog/spdlog.h"
#include "rdkafkacpp.h"
#include <gtest/gtest.h>
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

TEST(MyTest1, AddTest) {
    EXPECT_EQ(add(1, 2), 3);
}
TEST(MyTest2, AddTest) {
    EXPECT_EQ(add(1, 2), 32);
}
TEST(SpdlogTest, AddTest) {
    EXPECT_EQ(add(1, 2), 3);
    spdlog::info("Welcome to spdlog!");
    spdlog::error("Some error message with arg: {}", 1);

    spdlog::warn("Easy padding in numbers like {:08d}", 12);
    spdlog::critical("Support for int: {0:d};  hex: {0:x};  oct: {0:o}; bin: {0:b}", 42);
    spdlog::info("Support for floats {:03.2f}", 1.23456);
    spdlog::info("Positional args are {1} {0}..", "too", "supported");
    spdlog::info("{:<30}", "left aligned");

    spdlog::set_level(spdlog::level::debug); // Set global log level to debug
    spdlog::debug("This message should be displayed..");

    // change log pattern
    spdlog::set_pattern("[%H:%M:%S %z] [%n] [%^---%L---%$] [thread %t] %v");


    // Compile time log levels
    // define SPDLOG_ACTIVE_LEVEL to desired level
    SPDLOG_TRACE("Some trace message with param {}", 42);
    SPDLOG_DEBUG("Some debug message");
}


TEST(LibRdKafkaTest, version_str) {
    cout<< RdKafka::version_str()<<endl;
}