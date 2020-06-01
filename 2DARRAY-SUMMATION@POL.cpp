/*
 ____ _____  _____     __     __         _____ ____  _____  ______  _____ 
 
                                                                          
                                                                        
                 // written by Paul Gomez / 
				 Class 2018 //  iACADEMY
				 201801017@iacademy.edu.ph
				 wizard.dev@gmail.com	
				 @github // paulgomez-iac
				 
					
*/

#include <iostream>
using namespace std;
int const arraysize = 100; // To place a 2d Array into a function a requirment for a limit is required. So we place a constant for all arrays.

///////////GET DATA FUNCTION/////////////////

int get_data(){
	
	
	int number_rc;
	cout<< "Enter the number of rows and columns: " ;
	cin >> number_rc;
	cout<< "\n";
	
	if (number_rc>100){
		
		cout << "Invalid entry! Number must be less or equal to 100. Please try again." << endl;
		get_data(); //Recursion Loop if ever the user will input a number pass the limit
	}	
	
	return number_rc;
}
///////////LOOP FUNCTION FOR INPUT OF ROWS AND COLUMNS/////////////////
int getdata_array(int array_2d[][arraysize], int row, int column){
	
	int row_index;
	int column_index;
		
	// PER 1 tick of ROW FOR LOOP = 3 TICKS OF COLUMN LOOPS
	for (row_index = 0; row_index < row; ++row_index ){
		for (column_index = 0; column_index < column; ++column_index ){
			cout << "\nEnter the integer in row " << row_index+1 << " and Column " << column_index+1 << ": ";
			cin >> array_2d[row_index][column_index];
					}
	}	
}


///////////PRINT FUNCTION/////////////////
void print_array (int array_2d[][arraysize], int row, int column)
{
 int i;
 int j;
 int array_rowsum[arraysize];
 int array_colsum[arraysize];
 int v;
 
 v = array_2d[i][j];
 for(i=0; i<row; ++i){
 	
 	 array_rowsum[i] = 0;
 	array_colsum[i] = 0; 
 }
 

 //initial
 for (i = 0; i < row; ++i)
 {
 
 	cout << "\n\n"; //prints bottom and side spaces "/n" will not place a gap below
 	for (j = 0; j < column; ++j){
	 
 	
 	 
 	
		 cout << array_2d[i][j] << " "; // once j ticks 3 times it will trigger the 2nd of tick of i
	 
	 	array_rowsum[i]=array_rowsum[i]+array_2d[i][j];
	 
	 	array_colsum[j]=array_colsum[j]+array_2d[i][j];
	
	}
	
	 
 }
 ////
 cout << "\nThe sum of rows: ";
 
 //rowsums
 for( i=0; i<row; ++i){
 cout<< array_rowsum[i] << " ";	 	
 }
  ////
 cout << "\nThe sum of columns: ";
 
 //rowcol
 for( i=0; i<row; ++i){
 cout<< array_colsum[i] << " ";	 	
 }
 
}



int main(){
	
	//vars
	int row;
	int column;
	int input;
	
	//row acts as a holder for get_data
	row = get_data();
	//since its a squared array the value of the rows are equal to the columns
	column = row;
	
	//sizes are constant
	int array_2d[arraysize][arraysize];

	
	//loop function for getting the data for row and column. ROW and COLUMN vars act as a limit for the counters.
	getdata_array(array_2d,row,column);
	
	cout << "\nThe contents of the array are: ";
	print_array(array_2d,row,column);
	
	//not yet working.
	/*cout << "\n---------------"; 
	row_sums(array_matrix,row,column);
	*/
	
	
	
	
}
