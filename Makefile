# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -I./src

# Directories
SRC_DIR = src
TEST_DIR = tests
BIN_DIR = bin

# Source and test files
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)
MAIN_SRC = $(SRC_DIR)/main.cpp
TEST_SRC = $(TEST_DIR)/test.cpp

# Output executables
MAIN_BIN = $(BIN_DIR)/main
TEST_BIN = $(BIN_DIR)/test

# Default: build and run main app
all: $(MAIN_BIN)
	./$(MAIN_BIN)

# Build main executable
$(MAIN_BIN): $(SRC_FILES) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $(SRC_FILES) -o $@

# Build and run tests
tests: $(TEST_BIN)
	./$(TEST_BIN)

# Build test executable
$(TEST_BIN): $(TEST_SRC) $(SRC_DIR)/ToDoList.cpp | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $(TEST_SRC) $(SRC_DIR)/ToDoList.cpp -o $@

# Create bin directory if it doesn't exist
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Clean build artifacts
clean:
	rm -rf $(BIN_DIR)
