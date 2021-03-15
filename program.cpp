#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void printDir(char direction[20][40]);		//Function that print characters out following the direction fixed by user
void clearScreen();							//Function that clear the screen before the next output
void delay(int speed);						//Function that show the movement of the characters moviing by slowing down the process

int main()
{
	
//Draw out the pattern of characters for (A-Z) & (0-9) by using 2-dimensional array
	char displayBoardChar[200][300];		//let the size of display board char is 200 x 300 (2 Dimensional array)

	char a [7][9]={{"    #   "},{"   # #  "},{"  #   # "},{" #     #"},{" #######"},{" #     #"},{" #     #"}};
    char b [7][9]={{" ###### "},{" #     #"},{" #     #"},{" ###### "},{" #     #"},{" #     #"},{" ###### "}};
	char c [7][9]={{"   #### "},{"  #     "},{" #      "},{" #      "},{" #      "},{"  #     "},{"   #### "}};
	char d [7][9]={{" ###### "},{" #     #"},{" #     #"},{" #     #"},{" #     #"},{" #     #"},{" ###### "}};
	char e [7][9]={{" #######"},{" #      "},{" #      "},{" ###### "},{" #      "},{" #      "},{" #######"}};
	char f [7][9]={{" #######"},{" #      "},{" #      "},{" ###### "},{" #      "},{" #      "},{" #      "}};
	char g [7][9]={{"  ######"},{" #      "},{" #      "},{" #      "},{" #   ###"},{" #    ##"},{"  ######"}};
	char h [7][9]={{" #     #"},{" #     #"},{" #     #"},{" #######"},{" #     #"},{" #     #"},{" #     #"}};
	char I [7][9]={{" #######"},{"    #   "},{"    #   "},{"    #   "},{"    #   "},{"    #   "},{" #######"}};
	char J [7][9]={{"       #"},{"       #"},{"       #"},{"       #"},{"       #"},{" #     #"},{"  ##### "}};
	char k [7][9]={{" #    # "},{" #   #  "},{" #  #   "},{" ###    "},{" #  #   "},{" #   #  "},{" #    # "}};
	char l [7][9]={{" #      "},{" #      "},{" #      "},{" #      "},{" #      "},{" #      "},{" #######"}};
    char m [7][9]={{" #     #"},{" ##   ##"},{" # # # #"},{" #  #  #"},{" #     #"},{" #     #"},{" #     #"}};
	char n [7][9]={{" #     #"},{" ##    #"},{" # #   #"},{" #  #  #"},{" #   # #"},{" #    ##"},{" #     #"}};
	char o [7][9]={{"   ###  "},{"  #   # "},{" #     #"},{" #     #"},{" #     #"},{"  #   # "},{"   ###  "}};
	char p [7][9]={{" ###### "},{" #     #"},{" #     #"},{" ###### "},{" #      "},{" #      "},{" #      "}};
	char q [7][9]={{"  ##### "},{" #     #"},{" #     #"},{" #     #"},{" #   # #"},{" #    # "},{"  #### #"}};
	char r [7][9]={{" ###### "},{" #     #"},{" #     #"},{" ###### "},{" #   #  "},{" #    # "},{" #     #"}};
	char s [7][9]={{"  ##### "},{" #     #"},{" #      "},{"  ##### "},{"       #"},{" #     #"},{"  ##### "}};
	char t [7][9]={{" #######"},{"    #   "},{"    #   "},{"    #   "},{"    #   "},{"    #   "},{"    #   "}};
	char u [7][9]={{" #     #"},{" #     #"},{" #     #"},{" #     #"},{" #     #"},{" #     #"},{"  ##### "}};
	char v [7][9]={{" #     #"},{" #     #"},{" #     #"},{" #     #"},{"  #   # "},{"   # #  "},{"    #   "}};
	char w [7][9]={{" #     #"},{" #     #"},{" #     #"},{" #  #  #"},{" #  #  #"},{" ##   ##"},{" #     #"}};
	char x [7][9]={{" #     #"},{" #     #"},{"  #   # "},{"    #   "},{"  #   # "},{" #     #"},{" #     #"}};
	char y [7][9]={{" #     #"},{" #     #"},{"  #   # "},{"    #   "},{"    #   "},{"    #   "},{"    #   "}};
	char z [7][9]={{" #######"},{"      # "},{"     #  "},{"    #   "},{"   #    "},{"  #     "},{" #######"}};
	
    char zero  [7][9]={{" #######"},{" #     #"},{" #   ###"},{" #  #  #"},{" ###   #"},{" #     #"},{" #######"}};
	char one   [7][9]={{"    #   "},{"  ###   "},{"    #   "},{"    #   "},{"    #   "},{"    #   "},{" #######"}};
	char two   [7][9]={{"  ##### "},{" #     #"},{"      # "},{"    ##  "},{"   #    "},{"  #     "},{" #######"}};
	char three [7][9]={{" #######"},{"      # "},{"     #  "},{"    ### "},{"       #"},{" #     #"},{"  ##### "}};
	char four  [7][9]={{"     ## "},{"    # # "},{"   #  # "},{"  #   # "},{" #######"},{"      # "},{"      # "}};
	char five  [7][9]={{" #######"},{" #      "},{" #      "},{" ###### "},{"       #"},{" #     #"},{"  ##### "}};
	char six   [7][9]={{"   #### "},{"  #     "},{" #      "},{" ###### "},{" #     #"},{" #     #"},{"  ##### "}};
	char seven [7][9]={{" #######"},{"      # "},{"     #  "},{"    #   "},{"   #    "},{"   #    "},{"   #    "}};
	char eight [7][9]={{"  ##### "},{" #     #"},{" #     #"},{"  ##### "},{" #     #"},{" #     #"},{"  ##### "}};
	char nine  [7][9]={{"  ##### "},{" #     #"},{" #     #"},{"  ######"},{"       #"},{"      # "},{" #####  "}};
	char blank [7][9]={{"        "},{"        "},{"        "},{"        "},{"        "},{"        "},{"        "}};

	string input;					 		//Declare a variable to hold the user's input
	int limit;								//Declare a variable to hold the limit of characters can be typed
	limit = 25;								//The limit is 25 characters
	int inputSize;							//Declare a variable to hold the length of the string of characters
	char answer;    	       				//Declare a variable to hole the answer of user for to continue the program or not 

do
{		
   	cout << "Enter your input between (A - Z) or (0 - 9) of 25 characters." << endl;   	//Ask for input of characters from user
   	cout << "Blank space will be counted as character too." << endl;					//Specify that blank space is also counted as character
    
  	getline(cin, input);																//Get input from the user
	
	//Check for the length of the string of characters inputted by user "input.length()"
	
   	if (input.length() > limit)															//If the length of input is over the limit
   	{
		cout << "You entered an input which is over 25 characters." << endl;			//Ask whether the user wants to input again or not
		cout << "If you wish to enter the characters again, please enter Y, if no please enter any characters." << endl;
		cin >> answer;	 																//Get answer from the user
		cin.ignore();
	
	   		if(answer=='Y'||answer=='y')												//If the user wish to re-input --> loop back to the question of asking for input
	   		{
				cout<<"Okay.\n";
       		}
	   		else																		//If the user doesn't want to re-input --> exit from the program
	   		{
	      		cout<<"Program ended.";
	      		return 0;
       		} 
   	}
    else																	//If the length of input is within the limit
    {
    	inputSize = input.length();											//Get the length of the input and assign the its value to variable inputSize
    	break;																//Need not to continue the do-while loop
	}
    
}while(answer=='Y'||answer=='y');											//When the user wish to re-input, loop back to the start 

	cout << endl;

	for (int row = 0; row < 200; row++)										//Fill the whole displayBoardChar array with blanks(default value)
	{																					
		for (int col =0; col < 300; col++)									//So that garbage values will not appear
		{
			displayBoardChar[row][col] = ' ';
		}
	}
 
	for (int i = 0; i < 7; i++) 														//Checking for the characters typed by user row by row (character size is 7 rows)
	{
		for(int charSeq = 0; charSeq < input.length(); charSeq++)						//Checking for every characters typed one by one in ascending order (1st,2nd,3rd,4th,5th,...)
    	{
        	if (input[charSeq] == 'A' || input[charSeq] == 'a')							//Determine the characters typed are which characters "(A-Z)/(0-9)/(blank)" 
        	{
	            for(int j=0;j<9;j++)													//Checking for the characters typed by user column by column (character size is 9 columns)
			  	displayBoardChar[i][j+(charSeq*8)]=a[i][j];								//Assign displayBoardChar to the pattern of characters drew at first (2D array to 2D array)
            }																			//[i = rows] [j + (the initial coordinates of 1st/2nd/... char) = columns]
            
            else if (input[charSeq] == 'B' || input[charSeq] == 'b')
			{
           		for(int j=0;j<9;j++)
		  		displayBoardChar[i][j+(charSeq*8)]=b[i][j];	
           	}
            
            else if (input[charSeq] == 'C' || input[charSeq] == 'c')	
          	{
               	for(int j=0;j<9;j++)
			  	displayBoardChar[i][j+(charSeq*8)]=c[i][j];	
           	}
            	
            else if (input[charSeq] == 'D' || input[charSeq] == 'd')
           	{
              	for(int j=0;j<9;j++)
			  	displayBoardChar[i][j+(charSeq*8)]=d[i][j];	
           	}
            	
			else if (input[charSeq] == 'E' || input[charSeq] == 'e')	
            {
               	for(int j=0;j<9;j++)
			 	displayBoardChar[i][j+(charSeq*8)]=e[i][j];	
           	}
            	
            else if (input[charSeq] == 'F' || input[charSeq] == 'f')
            {
               	for(int j=0;j<9;j++)
			  	displayBoardChar[i][j+(charSeq*8)]=f[i][j];	
           	}
            	
			else if (input[charSeq] == 'G' || input[charSeq] == 'g')
            {
               	for(int j=0;j<9;j++)
			  	displayBoardChar[i][j+(charSeq*8)]=g[i][j];	
           	}
            	
            else if (input[charSeq] == 'H' || input[charSeq] == 'h')
           	{
               	for(int j=0;j<9;j++)
		  		displayBoardChar[i][j+(charSeq*8)]=h[i][j];	
           	}
            	
			else if (input[charSeq] == 'I' || input[charSeq] == 'i')	
            {
               	for(int j=0;j<9;j++)
			  	displayBoardChar[i][j+(charSeq*8)]=I[i][j];	
           	}
            	
			else if (input[charSeq] == 'J' || input[charSeq] == 'j')	
            {
               	for(int j=0;j<9;j++)
			  	displayBoardChar[i][j+(charSeq*8)]=J[i][j];	
           	}
            	
			else if (input[charSeq] == 'K' || input[charSeq] == 'k')
            {
               	for(int j=0;j<9;j++)
		  		displayBoardChar[i][j+(charSeq*8)]=k[i][j];	
           	}
            	
            else if (input[charSeq] == 'L' || input[charSeq] == 'l')
            {
               	for(int j=0;j<9;j++)
			  	displayBoardChar[i][j+(charSeq*8)]=l[i][j];	
           	}
            	
			else if (input[charSeq] == 'M' || input[charSeq] == 'm')
            {
               	for(int j=0;j<9;j++)
		  		displayBoardChar[i][j+(charSeq*8)]=m[i][j];	
           	}
            	
			else if (input[charSeq] == 'N' || input[charSeq] == 'n')
            {
               	for(int j=0;j<9;j++)
			  	displayBoardChar[i][j+(charSeq*8)]=n[i][j];	
           	}
            	
            else if (input[charSeq] == 'O' || input[charSeq] == 'o')
           	{
               	for(int j=0;j<9;j++)
			  	displayBoardChar[i][j+(charSeq*8)]=o[i][j];	
           	}
            	
			else if (input[charSeq] == 'P' || input[charSeq] == 'p')
            {
               	for(int j=0;j<9;j++)
			  	displayBoardChar[i][j+(charSeq*8)]=p[i][j];	
           	}
            	
            else if (input[charSeq] == 'Q' || input[charSeq] == 'q')	
           	{
               	for(int j=0;j<9;j++)
		  		displayBoardChar[i][j+(charSeq*8)]=q[i][j];	
           	}
            	
            else if (input[charSeq] == 'R' || input[charSeq] == 'r')
           	{
               	for(int j=0;j<9;j++)
		  		displayBoardChar[i][j+(charSeq*8)]=r[i][j];	
           	}
            	
            else if (input[charSeq] == 'S' || input[charSeq] == 's')
           	{
               	for(int j=0;j<9;j++)
			  	displayBoardChar[i][j+(charSeq*8)]=s[i][j];	
           	}
            	
            else if (input[charSeq] == 'T' || input[charSeq] == 't')
            {
               	for(int j=0;j<9;j++)
		  		displayBoardChar[i][j+(charSeq*8)]=t[i][j];	
           	}
            	
            else if (input[charSeq] == 'U' || input[charSeq] == 'u')
           	{
               	for(int j=0;j<9;j++)
		  		displayBoardChar[i][j+(charSeq*8)]=u[i][j];	
           	}
            	
            else if (input[charSeq] == 'V' || input[charSeq] == 'v')
            {
               	for(int j=0;j<9;j++)
			  	displayBoardChar[i][j+(charSeq*8)]=v[i][j];	
           	}
            	
            else if (input[charSeq] == 'W' || input[charSeq] == 'w')
            {
               	for(int j=0;j<9;j++)
		  		displayBoardChar[i][j+(charSeq*8)]=w[i][j];	
           	}
            	
            else if (input[charSeq] == 'X' || input[charSeq] == 'x')
           	{
               	for(int j=0;j<9;j++)
		  		displayBoardChar[i][j+(charSeq*8)]=x[i][j];	
           	}
            	
            else if (input[charSeq] == 'Y' || input[charSeq] == 'y')
           	{
               	for(int j=0;j<9;j++)
		  		displayBoardChar[i][j+(charSeq*8)]=y[i][j];	
           	}
            	
            else if (input[charSeq] == 'Z' || input[charSeq] == 'z')	
           	{
               	for(int j=0;j<9;j++)
		  		displayBoardChar[i][j+(charSeq*8)]=z[i][j];	
           	}
            	
            else if(input[charSeq] == '0')
           	{
               	for(int j=0;j<9;j++)
		  		displayBoardChar[i][j+(charSeq*8)]=zero[i][j];	
           	}
            	
            else if(input[charSeq] == '1')
           	{
               	for(int j=0;j<9;j++)
				displayBoardChar[i][j+(charSeq*8)]= one [i][j];	
           	}
            	
            else if(input[charSeq] == '2')	
           	{
               	for(int j=0;j<9;j++)
		  		displayBoardChar[i][j+(charSeq*8)]=two[i][j];	
           	}
            	
            else if(input[charSeq] == '3')	
           	{
              	for(int j=0;j<9;j++)
		  		displayBoardChar[i][j+(charSeq*8)]=three[i][j];	
           	}
            	
            else if(input[charSeq] == '4')
            {
               	for(int j=0;j<9;j++)
		  		displayBoardChar[i][j+(charSeq*8)]=four[i][j];	
           	}
            	
            else if(input[charSeq] == '5')
           	{
               	for(int j=0;j<9;j++)
			 	displayBoardChar[i][j+(charSeq*8)]=five[i][j];	
           	}
            	
            else if(input[charSeq] == '6')	
           	{
               	for(int j=0;j<9;j++)
			  	displayBoardChar[i][j+(charSeq*8)]=six[i][j];	
           	}
            	
            else if(input[charSeq] == '7')
           	{
               	for(int j=0;j<9;j++)
		  		displayBoardChar[i][j+(charSeq*8)]=seven[i][j];	
           	}
            	
			else if(input[charSeq] == '8')		
            {
               	for(int j=0;j<9;j++)
		  		displayBoardChar[i][j+(charSeq*8)]=eight[i][j];	
           	}
            	
            else if(input[charSeq] == '9')	
           	{
               	for(int j=0;j<9;j++)
		  		displayBoardChar[i][j+(charSeq*8)]=nine[i][j];	
           	}
           	            
			else
           	{
               	for(int j=0;j<9;j++)
		  		displayBoardChar[i][j+(charSeq*8)]=blank[i][j];	
           	}
		}	
	}

//set up a display board 
	
	int coordRow,coordCol;									//Declare variables to hold the input of anchor dots (row,column) "coordRow: horizontal(x-axis)" "coordCol: vertical(y-axis)"
	int lengthOfBoard; 										//Declare a varible to hold the length of display board (horizontal) (used for wrap around effect)
	lengthOfBoard = (inputSize * 8) + 40;					//(number of characters * size per character(horizontal)) + maximum columns of normal display board(pre-determined:40)
	int widthOfBoard;										//Declare a varible to hold width of display board (vertical) (used for wrap around effect)
	widthOfBoard = 7 + 20;    								//size per character(vertical) + maximum rows of normal display board(pre-determined:20)
	
	char displayBoard[widthOfBoard][lengthOfBoard];			//2D array for display board[vertical(row)][horizontal(column)]
	
	cout << "Please enter the coordinates you want the anchor dot to be of your input." << endl;		//Ask for the input of anchor dots
	cout << "The maximum value for the coordinates is (39,19)" << endl;									//Tell about the restriction of the anchor dots
	cout << "Enter coordinate of row: ";																//Ask for coordinate of row (x-axis:horizontal)
    cin >> coordRow;																					//Get coordinate of row
	cout << "Enter coordinate of column: ";																//Ask for the coordinate of column (y-axis:vertical)
	cin >> coordCol;																					//Get coordinate of column
    cout << endl;
    
    if( coordRow < 0 || coordCol < 0 || coordRow > 39 || coordCol > 19)									//When the coordinates entered are wrong
    {
		cout << "You entered an invalid value.";														//Tell the user about the wrong input
		return 0;																						//Exit from the program
	}
	
	coordCol = 19 - coordCol;										//To make the coordinates(0,0) start from the bottom left corner of the display board (changes of y-axis value"row")
																	//As the 2D array automatically set (0,0) at the top left corner
	
	for (int row = 0; row < widthOfBoard; row++)					//Fill in the whole display board with blanks (default values) before printing character out one by one
	{																//To prevent garbage values to be displayed
		for (int col = 0; col < lengthOfBoard; col++)
		{
			displayBoard[row][col] = ' ';
		}
	}
	
	for (int row = 0; (row + coordCol) < widthOfBoard; row++)    							//When characters can be printed normally without any cropping (vertical) as all coordinates are still within range
	{
		for (int col = 0; (col + coordRow) < lengthOfBoard; col++)							//When characters can be printed normally without any cropping (horizontal) as all coordinates are still within range
		{		
			if (row < 7 && col < (inputSize * 8))											//Print characters when in range, (inputSize * 8 is the total length of all the characters inputted)
			{
				displayBoard[row + coordCol][col + coordRow] = displayBoardChar[row][col];	//Assign displayBoard[][] to displayBoardChar[]
			}
		}
	}
	
	//upwards & downwards --> wrap around	

	if (coordCol > 13)																		//After the point of 13(vertical), can't print whole characters perfectly --> will be cropped --> leftovers appears on top 
	{
		for (int row = 0, maxRow = 20; row < (coordCol - 13); row++, maxRow++)				//Characters that is not within the row of (0-19) will be output at a new row from top or bottom
		{
			for (int col = 0; col < lengthOfBoard; col++)									//columns
			{
				displayBoard[row][col + coordRow] = displayBoardChar[maxRow - coordCol][col];		//Assign displayBoard to displayBoardChar [rows][columns]
			}																						//columns will increase based on the coordRow but coordinate that over than the max length of the board will not be printed
		}																							//rows over maximum row value will still be printed (coordinates are changed)
	}

//user input for scrolling option, time steps and speed

	int choice;							//Declare a variable to hold the choice of direction characters moving
	int timeSteps;						//Declare a variable to hold the time steps of characters moving 
	int speed;							//Declare a variable to hold the speed of characters moving
	
	cout << "You're given five choices to display your input from different direction." << endl << endl;
	cout << "Enter: " << endl << "1 for scrolling left to right" << endl << "2 for scrolling right to left" << endl << "3 for scrolling upwards" << endl << "4 for scrolling downwards" << endl;
	cout << "5 for stationary without scrolling" << endl ;											//Ask for input of the choices of characters moving (different directions)
	cin >> choice;																					//Get input from the user
	cout << endl;
	
	if (choice < 0 || choice > 5)																	//If the choice inputted is invalid
	{
		cout << "You entered an invalid choice." << endl;											//Tell the user about the wrong input
		return 0;																					//Exit from the program
	}
	
	cout << "Please choose how many time steps you want to display the input." << endl << "Each time step represents one refresh cycle." << endl;		//Ask for the input of time steps
	cin >> timeSteps;																																	//Get input from the user 
	cout << endl;
	
	cout << "Please choose your speed of the refresh cycle." << endl << "[1 being the slowest and 10 being the fastest]" << endl;						//Ask for input of the speed
	cin >> speed;																																		//Get input from the user
	cout << endl;
	
	if (speed < 1 || speed > 10)																	//If the speed inputted is invalid
	{
		cout << "You entered an invalid speed." << endl;											//Tell the user about the wrong input
		return 0;																					//Exit from the program
	}
		
//output the choice of user choose (directions of characters moving)

	switch (choice)
	{
		case 1:																	//The characters moving from left to right
		char scrollLtoR [20][40];												//Declare the function used in this 
		
			for (int i = 0; i < 40; i = i + timeSteps)						  	//Set i as the variable(initialisation at 0) to hold the changing of values of columns
																				//As the time steps will affect the coordinates of characters to be outputted at columns 
			{
				for (int row = 0; row < 20; row++)								//Declare variable row with initialisation of 0, loop for every rows until row reaches 20 of display board
				{
					for (int col = 0; col < 40; col++)							//Declare variable col with initialisation of 0, loop for every columns until col reaches 40 of display board
					{
						if ((col + i) < 40)										//As the columns changing, if the characters still within range (0,40)�horizontal� 
						{
							scrollLtoR[row][col + i] = displayBoard[row][col];	//Display the characters as usual, assign the function to displayBoard
						}
						
						if (col < i)											//leave the space of the characters passed by as blanks
						{														//To prevent from unwanted values being displayed
							scrollLtoR[row][col] = ' ';
						}
					}
				}
			clearScreen();														//Clear the screen
			printDir(scrollLtoR);												//Calls the function to print out the char
			delay(speed);														//Delay the movements of the characters
			}
		break;
		
		case 2:																	//The characters moving from right to left
		char scrollRtoL [20][40];												//Declare the function used in this

			for (int i = 0; i < lengthOfBoard; i = i + timeSteps)				//Set i as the variable(initialisation at 0) to hold the changing of values of columns
																				//As the time steps will affect the coordinates of characters to be outputted at columns
																				//Using lengthOfBoard at here to display all the characters inputted, not just the characters within range of 40(columns)
			{
				for (int row = 0; row < 20; row++)								//Declare variable row with initialisation of 0, loop for every rows until row reaches 20 of display board
				{
					for (int col = 0; col < lengthOfBoard; col++)				//Declare variable col with initialisation of 0, loop for every columns until col reaches 40 of display board (lengthOfBoard --> display all characters)
					{
						if ((col - i) >= 0 && (col - i) < 40)					//As the columns changing, if the characters still in range (0,40)(horizontal)
						{
							scrollRtoL[row][col - i] = displayBoard[row][col];	//Display as usual, assign the funtion to displayBoard
						}
						
					}
				}
			clearScreen();														//Clear the screen
			printDir(scrollRtoL);												//Calls the function to print out characters
			delay(speed);														//Delay the movements of the characters
			}
		break;
		
		case 3:																	//The characters moving upwards
		char upwards [20][40];													//Declare the function used in this
		
		for (int l = 0; l < 5; l++)												//Repeat the process of the characters moving for 6 times
		{
			for (int i = 0; i < 20; i = i + timeSteps)							//Set i as the variable(initialisation at 0) to hold the changing of values of rows
																				//As the time steps will affect the coordinates of characters to be outputted at rows
			
			{
				for (int row = 0; row < 20; row++)								//Declare variable row with initialisation of 0, loop for every rows until row reaches 20 of display board
				{
					for (int col = 0; col < 40; col++)							//Declare variable col with initialisation of 0, loop for every columns until col reaches 40 of display board
					{
						if ((row - i) < 0)										//As the rows changing, if the characters are out of range ([0],20)(vertical), the remaining parts printed from below
						{
							upwards[20 + row - i][col] = displayBoard[row][col];
						}
						else 													//As the rows changing, if the characters are still in the range (0,20)(vertical), print as usual
						{
							upwards[row - i][col] = displayBoard[row][col];
						}

					}
				}
			clearScreen();														//Clear the screen
			printDir(upwards);													//Calls the function to print out characters
			delay(speed);														//Celay the movements of the characters
			}
		}
		break;
		
		case 4:																	//The characters moving downwards
		char downwards [20][40];												//Declare the function used in this
		
		for (int l = 0; l < 5 ; l++)											//repeat the process for 6 times
		{	
			for (int i = 0; i < 20; i = i + timeSteps)							//Set i as the variable(initialisation at 0) to hold the changing of values of rows
																				//As the time steps will affect the coordinates of characters to be outputted at rows
			
			{
				for (int row = 0; row < 20; row++)								//Declare variable row with initialisation of 0, loop for every rows until row reaches 20 of display board
				{
					for (int col = 0; col < 40; col++)							//Declare variable col with initialisation of 0, loop for every columns until col reaches 40 of display board
					{
						if ((row + i) >= 20)									//As the rows changing, when the characters are out of range (0,[20])(vertical), the remaining parts of char printed from top
						{
							downwards[(row + i) - 20][col] = displayBoard[row][col]; 
						}
						else 													//as the rows changing, when the characters are still within the range (0,20)(vertical), print as usual
						{
							downwards[(row + i)][col] = displayBoard[row][col];
						}

					}
				}
			clearScreen();														//Clear the screen
			printDir(downwards);												//Calls the function to print out characters
			delay(speed);														//Delay the movements of the characters
			}
		}
		break;
		
		case 5:																	//The characters stay stationary
		char stationary[20][40];												//Declare the function used in this
		
		for (int row = 0; row < 20; row++)										//Declare variable row with initialisation of 0, loop for every rows until row reaches 20 of display board
		{
			for (int col = 0; col < 40; col++)									//Declare variable col with initialisation of 0, loop for every columns until col reaches 40 of display board
			{
				stationary[row][col] = displayBoard[row][col];					//If all characters are within the size of board, print as usual
			}
		}
				
		if (coordCol > 13)														//After the point of 13 (vertical), can't print char perfectly --> will be cropped --> show on top
		{
			for (int row = 0; row < (coordCol - 13); row++)
			{																	//Put blanks for the characters being cropped out, so that they don't show on display board
				for(int col = 0; col < 40; col++ )								//Originally will be shown because of lines 428 to lines 437
				stationary[row][col] = ' ';
			}
		}
			clearScreen();														//Clear the screen
			printDir(stationary);												//Calls the function to print out characters
			delay(speed);														//Delay the movements of the characters
		break;
	}
	
 return 0 ;							     
}

//////////////////////////////////////***************F U N C T I O N***************//////////////////////////////////////
void printDir(char direction[20][40])   //direction : scrollLtoR , scrollRtoL, upwards, downwards, stationary
{

	for(int row = 0; row < 20; row++)			//Declare variable row with initialisation of 0, loop for every rows until row reaches 20
	{
		for(int col = 0; col < 40; col++)		//Declare variable col with initialisation of 0, loop for every columns until col reaches 40
		{
			cout << direction[row][col];
		}
	    cout << endl;
	}

}

void delay(int speed)
{
    speed = (300000000 / speed);			//The bigger value of speed inputted by user, the smaller the value for the FOR LOOP to loop
    for( int i = 0; i < speed; i++ )		//So the speed will be fastest at speed of 10, slowest at speed of 1 
    { }
}

void clearScreen()
{
   system( "cls" );
}

