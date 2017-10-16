CC := g++
FLAGS := -std=c++11 -Wall -g 
BIN_DIR := bin
INC_DIR := include
SRC_DIR := source
BUI_DIR := build
INCLUDE := -I./$(INC_DIR)
$(BIN_DIR)/main: $(BUI_DIR)/Runway.o $(BUI_DIR)/Random.o $(BUI_DIR)/Plane.o $(BUI_DIR)/Queue.o $(BUI_DIR)/Extended_Queue.o $(BUI_DIR)/main.o
	@mkdir -p $(BIN_DIR)
	$(CC) $(FLAGS) $(INCLUDE) $(BUI_DIR)/Runway.o $(BUI_DIR)/Random.o $(BUI_DIR)/Plane.o $(BUI_DIR)/Queue.o $(BUI_DIR)/Extended_Queue.o $(BUI_DIR)/main.o -o $@
$(BUI_DIR)/Runway.o: $(SRC_DIR)/Runway.cpp
	@mkdir -p $(BUI_DIR)
	$(CC) $(FLAGS) $(INCLUDE) -c -o $@ $(SRC_DIR)/Runway.cpp
$(BUI_DIR)/Plane.o: $(SRC_DIR)/Plane.cpp
	@mkdir -p $(BUI_DIR)
	$(CC) $(FLAGS) $(INCLUDE) -c -o $@ $(SRC_DIR)/Plane.cpp
$(BUI_DIR)/Queue.o: $(SRC_DIR)/Queue.cpp
	@mkdir -p $(BUI_DIR)
	$(CC) $(FLAGS) $(INCLUDE) -c -o $@ $(SRC_DIR)/Queue.cpp
$(BUI_DIR)/Random.o: $(SRC_DIR)/Random.cpp
	@mkdir -p $(BUI_DIR)
	$(CC) $(FLAGS) $(INCLUDE) -c -o $@ $(SRC_DIR)/Random.cpp
$(BUI_DIR)/Extended_Queue.o: $(SRC_DIR)/Extended_Queue.cpp
	@mkdir -p $(BUI_DIR)
	$(CC) $(FLAGS) $(INCLUDE) -c -o $@ $(SRC_DIR)/Extended_Queue.cpp
$(BUI_DIR)/main.o: $(SRC_DIR)/main.cpp
	@mkdir -p $(BUI_DIR)
	$(CC) $(FLAGS) $(INCLUDE) -c -o $@ $(SRC_DIR)/main.cpp
clean:
	@rm -rf $(BUI_DIR)
	@rm -rf $(BIN_DIR)