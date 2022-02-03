# Makefile for pause
# Trademark & Copyright (c) 2022 Miclaus Industries Corporation B.V. Advanced Software Technologies Research Group

##### Build Configuration #####
# Compiler. We're using `Apple clang++ 13.0.0`, however you should be able to compile with other compilers (eg. g++ / MSVC / Intel DPC++ / etc) using little-to-no modification.
CC = clang++

# Compiler Flags. We're currently targeting the "Working draft for ISO C++ 2023 DIS" standard, Optimizing for Size and enabling every extra warnings, among other trivial things to improve security and so on.
CC_FLAGS = -std=c++2b -Os -Wall -Wextra -march=native -Walloca -Wcast-qual -Wconversion -Wformat=2 -Wformat-security -Wnull-dereference -Wstack-protector -Wvla -Warray-bounds -Warray-bounds-pointer-arithmetic -Wassign-enum -Wbad-function-cast -Wconditional-uninitialized -Wconversion -Wfloat-equal -Wformat-type-confusion -Widiomatic-parentheses -Wimplicit-fallthrough -Wloop-analysis -Wpointer-arith -Wshift-sign-overflow -Wshorten-64-to-32 -Wswitch-enum -Wtautological-constant-in-range-compare -Wunreachable-code-aggressive -Wthread-safety -Wthread-safety-beta -Wcomma -D_FORTIFY_SOURCE=2 -fstack-protector-strong -fPIE -fsanitize=integer

# Name for the built binary.
BUILD_NAME = pause

# Directories
SOURCE_DIR = Source
BUILD_DIR = Build

# Files to be Compiled. Notice: Compilation Order matters
SOURCE_FILES = Source/driver/keyboard.c Source/main.cpp

##### Routines #####
# Build Project
project: $(SOURCE_FILES)
	$(CC) $(CC_FLAGS) $(SOURCE_FILES) -o $(BUILD_DIR)/$(BUILD_NAME)

# Clean Build
clean: $(BUILD_DIR)
	rm -frv $(BUILD_DIR)/$(BUILD_NAME)

# Run Build
run: $(BUILD_DIR)/$(BUILD_NAME)
	./$(BUILD_DIR)/$(BUILD_NAME)

# Run Debugger on built binary
runWithDebugger: $(BUILD_DIR)/$(BUILD_NAME)
	lldb $(BUILD_DIR)/$(BUILD_NAME)