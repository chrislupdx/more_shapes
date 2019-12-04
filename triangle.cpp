//extra credit
//12/04/19 Chris Lu
//draws a triangle in the upper right corner of a square

#include <iostream>
#include <iomanip>

using namespace std;

int input(int &sqrSize, char &trShape);
int draw(int sqrSize, char trShape);

int main()
{
int sqrSize;
char trShape;

do //input + draw repeat until the exit condition is given
{
input(sqrSize, trShape);
draw(sqrSize, trShape);
}
while (sqrSize != 0);

return 0;
}

int draw(int sqrSize, char trShape)
{
cout << endl;
int off;
int rowSize = sqrSize;
int spaces = 0;
for (int i = 0; i < sqrSize; i++) //prints sqrSize # of rows
{
  for (int i = 0; i < spaces; i++) //prints spaces in inversely proportional to # of chars
  {
    cout << " ";
  }
  for (int i = 0; i < rowSize; i++) //draws a single row
  {
    cout << trShape;
  }
  rowSize--; //shorten the row each time
  spaces = sqrSize - rowSize; //counts # of spaces relative to original line char count
  cout << endl; //indents at the end of the row
}

cout << endl;
return 0;
}


int input(int &sqr, char &trShape)
{
do //prohitibts values over 30 and under 1, exits on 0
{
cout << "gimme a number, can't be bigger than 30" << endl;
cin >> sqr;
  if (sqr == 0) //forces an exit on zero
  {
    break;
  }
cout << "gimme a shape" << endl;
cin >> trShape;
}
while (sqr != 0 && sqr < 1 || sqr > 30 );

return 0;

//failure conditoin to return 1;

};
