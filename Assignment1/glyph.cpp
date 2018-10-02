/*
Mirror function:
{

}
Transpose function:
{

}
Rotate function:
{

}
*/

#include "glyph.h" 

/*
Transpose Function:
Print by columns into the normal rows
[0][1->9] then[1][1->9], etc into[0->9][0->9]
Convert 8's to 9's and 9's to 8's 
*/
string transpose(int inputGlyph[][COLUMNS])
{
	string transposeString;
	cout << "Transposed Glyph:" << endl;
	//print array
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			if (inputGlyph[j][i] == 8)
			{
				inputGlyph[j][i] = 9;
			}
			else if (inputGlyph[j][i] == 9)
			{
				inputGlyph[j][i] = 8;
			}
			cout << inputGlyph[j][i];
			transposeString = transposeString + (char)inputGlyph[j][i];
		}
		cout << '\n';
	}

	return "A";
}

/*
Mirror Function
Purpose:
Print array normally, but print columns from left (position 9) to right (position 0)
Convert 6's to 7's and 7's to 6's
*/
string mirror(int inputGlyph[][COLUMNS])
{
	string mirrorString;
	cout << "Mirrored glyph:" << endl;
	//print array BACKWARDS
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = COLUMNS - 1; j >= 0; j--)
		{

			if (inputGlyph[i][j] == 6)
			{
				inputGlyph[i][j] = 7;
			}
			else if (inputGlyph[i][j] == 7)
			{
				inputGlyph[i][j] = 6;
			}
			cout << inputGlyph[i][j];
			mirrorString = mirrorString + (char)inputGlyph[i][j];
		}
		cout << '\n';
	}
	return "A";
}

/*
Rotate Function:
- Print the bottom row first, then do the top row
[0][0->9] put in [9][0->9] then [1->9][1->9] put in [0->8][0->9]
*/
string rotate(int inputGlyph[][COLUMNS])
{
	string rotateString;
	cout << "Rotate Glyph:" << endl;


	return "A";
}

/*
Render Function
Purpose:
- To step through each integer of the glpyh, convert each single integer into its corresponding ASCII value
- To print/output the glyph to the 
*/
string render(int inputGlyph[][COLUMNS])
{
	//This is the array for making conversions from integers/pixels to characters for the image. 
	//Conversions in this function are made by converting the numbers on the glyph to the corresponding integer position on the character array
	//Examples of these are 0 will equal . and 5 will equal +
	char character[] = { '.', 'o', 'O', '*', '#', '+', '/', '\\', '-', '|' };
	return "A";
}






