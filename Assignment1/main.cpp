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
	string returnString;
	int tempArray[ROWS][COLUMNS];
	inData.open(filename);

	//File input from the example.glyph file
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			inData >> tempArray[i][j];
		}
	}

	//printing out the original glyph pulled from the example.glyph file
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)  
		{
			cout << tempArray[i][j];
		}
		cout << '\n';
	}

	//array to string
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			returnString = returnString + (char)tempArray[i][j];
		}
	}

	//String to array
	cout << '\n';
	
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			 char temp = returnString[i * 10 + j];
			 tempArray[i][j] = (int)temp;
		}
	}
	cout << '\n';
	//print array
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			cout << tempArray[i][j];
		}
		cout << '\n';
	}
	cout << '\n';
	
		system("pause");
		return 0;


}

