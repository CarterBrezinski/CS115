/*
}
Main Function:
{
InFile

OriginalArray
TempArray

Call Pull function
// Print/Render pulled function

Call Mirror function
// Print/Render mirror function

Call Transpose function
// Print/Render transpose function

Call Rotate function
// Print/Render rotate function
}
*/



#include "glyph.h"

int main()
{
	ifstream inData;

	string filename = "example.glyph";

	inData.open(filename);

	int tempArray[ROWS][COLUMNS];
	//pull array
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			inData >> tempArray[i][j];
			
		}
	}
	//print array
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)  
		{
			cout << tempArray[i][j];
		}
	}
	system("pause");
	return 0;
}