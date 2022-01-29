CC = g++
FLAGS = -g -Wall -s -pedantic-errors
EXEC = Chess
SRC = .\src\
FILES = Chess.cpp CommandScanner.cpp ChessModel.cpp ChessViewer.cpp ChessController.cpp 

$(EXEC): $(FILES)
	$(CC) $(FLAGS) -o $(EXEC) $(SRC)$(FILES)
