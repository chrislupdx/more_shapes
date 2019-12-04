//extra credit
//12/04/19 Chris Lu
//draws a triangle in the upper right corner of a square

#include <iostream>
#include <iomanip>

using namespace std;

int input(int &sqrSize, char &trShape);

int main()
{
int sqrSize;
char trShape;

do
{
input(sqrSize, trShape);
}
while (sqrSize != 0);

return 0;}

int input(int &sqr, char &trShape)
{
do
{
cout << "gimme a number, can't be bigger than 30" << endl;
cin >> sqr;
}
while (sqr != 0 && sqr < 1 || sqr > 30 );

cout << "gimme a shape" << endl;
cin >> trShape;



return 0;
};

