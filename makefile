CC = g++
CFLAGS = -std=c++17 -Wall
SRCS = main.cpp BST.cpp animal.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = program3

all: $(TARGET)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
