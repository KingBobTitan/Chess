#include "Chess.h"
#include <QtWidgets/QApplication>
#include "Board.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	
	Board board;
	board.show();


	return a.exec();
}
