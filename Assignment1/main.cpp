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
		cout << '\n';
	}
	
	//String to array
	cout << "\n";
	string returnString = "0006999700006000007009008080090900404009090000000909000200090900000009070003000600700000600007888600";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			 char temp = returnString[i * 10 + j];
			 tempArray[i][j] = (int)temp - '0';
		}
	}
	//print array
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			cout << tempArray[i][j];
		}
		cout << '\n';
	}
	system("pause");
	return 0;
}

