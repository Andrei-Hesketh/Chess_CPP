CC = g++
FLAGS = -g -Wall -s -pedantic-errors
EXEC = Chess
FILES = Chess.cpp ChessModel.cpp

$(EXEC): $(FILES)
	$(CC) $(FLAGS) -o $(EXEC) $(FILES)
