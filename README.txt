# CCS102 FINAL PROJECT: 
  - INCOME CALCULATOR

## PROJECT OVERVIEW :
  - This program is an income calculator that allows users to calculate their total and average income over a specified period. Users can select the desired time frame and input the necessary information, and the program will automatically calculate and display the total amount and average. 

The program begins with a menu with the following options:
      [D] - DAILY
      [W] - WEEKLY
      [M] - MONTHLY
      [Y] - YEARLY
      [Q] - QUIT

FLOW:

1. Menu Selection:
  - Users choose an option from the main menu: Daily, Weekly, Monthly, Yearly, or Quit.
  - Invalid inputs (non-menu options, symbols, integers) trigger error messages and prompt for re-entry.
2. Period Specification:
  - Users enter the desired period length.
  - Invalid inputs (less than or equal to 1, negative values, non-numeric characters) trigger error messages and prompt for re-entry.
3. Income Input Loop:
  - Users enter income amounts for each period.
  - Invalid inputs (negative values, non-numeric characters) trigger error messages and prompt for re-entry.
4. Calculation and Display:
  - The program calculates the total and average income based on user input.
  - Results are displayed in a clear and formatted manner.

Features:
  - Concise and informative prompts and messages
  - Error messages with re-entry prompts
  - Clear screen before and after each step
  - Structured menu and user flow
  - Streamlined code for improved readability

List of situations when selection structure is used: 
1. Choosing an option (switch statement): 
  - Evaluates user input and executes code based on the chosen menu option.
2. Handling errors (if-else statement): 
  - Validates user input and displays appropriate error messages with re-entry prompts for invalid values.

List of situations when looping structure is used:
1. Validation of all input values (do-while loop): 
  - Repeats user input prompts until valid data is entered.
2. Getting income amounts (for loop): 
  - Iterates the income input process based on the chosen period, ensuring income is collected for each individual period.
3. Flow of the program (do-while loop): 
  - Drives the overall program flow, continuously displaying the main menu and executing chosen options until the "Quit" option is selected.

Programming Language:
  - C

### Date:
  - December 11, 2023

#### Programmers: 
  - SUBRIO, CHARRYL
  - LOMARDA, ISMAEL MARLON
  - TORAJA, HERRO

charrylsubrio.github.io/
github.com/charrylsubrio/
linkedin.com/in/charrylsubrio/
youtube.com/@charrylsubrio/
freecodecamp.org/charrylsubrio/
facebook.com/charrylsubrio/
