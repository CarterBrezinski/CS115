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
string transpose(int inputArray[][COLUMNS])
{
	cout << "Transposed Glyph:" << endl;
	//print array
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			if (inputArray[j][i] == 8)
			{
				inputArray[j][i] = 9;
			}
			else if (inputArray[j][i] == 9)
			{
				inputArray[j][i] = 8;
			}
			cout << inputArray[j][i];
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
string mirror(int inputArray[][COLUMNS])
{
	cout << "Mirrored glyph:" << endl;
	//print array BACKWARDS
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = COLUMNS - 1; j >= 0; j--)
		{

			if (inputArray[i][j] == 6)
			{
				inputArray[i][j] = 7;
			}
			else if (inputArray[i][j] == 7)
			{
				inputArray[i][j] = 6;
			}
			cout << inputArray[i][j];
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
string rotate(int inputArray[][COLUMNS])
{
	cout << "Rotate Glyph:" << endl;



	return "A";
}

/*
Render Function
Purpose:
- To step through each integer of the glpyh, convert each single integer into its corresponding ASCII value
- To print/output the glyph to the 
*/
string render(int inputArray[][COLUMNS])
{
	//This is the array for making conversions from integers/pixels to characters for the image. 
	//Conversions in this function are made by converting the numbers on the glyph to the corresponding integer position on the character array
	//Examples of these are 0 will equal . and 5 will equal +
	char character[] = { '.', 'o', 'O', '*', '#', '+', '/', '\\', '-', '|' };
	return "A";
}






