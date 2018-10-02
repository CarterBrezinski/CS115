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

	string returnString;
	//array to string
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			returnString = returnString + (char)tempArray[i][j];
		}
	}

	//String to array
	cout << "\n";
	
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			 char temp = returnString[i * 10 + j];
			 tempArray[i][j] = (int)temp;
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

