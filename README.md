# CPP-Module-00

This repository contains my solutions for Module 00. In these exercises I learned fundamental C++ concepts including object-oriented programming, member functions, static members, and proper I/O formatting. Below is an overview of my approach for each exercise.

---

## ex:00 - Megaphone

### Plan
1. **Argument Checking:**
   - If there are no command-line arguments, print:
     ```
     * LOUD AND UNBEARABLE FEEDBACK NOISE *
     ```
     then print a newline and exit.
2. **Process Arguments:**
   - Iterate over each argument.
   - For each argument:
     - Iterate over its characters.
     - Convert each lowercase character to uppercase.
     - Print all characters (non-lowercase ones are printed as-is).
   - Finally, print a newline and exit.

### Lessons Learned
- **Objects in C++:**
  `std::cout` is an object representing the standard output stream, which enables a more modular and object-oriented approach compared to C’s `printf()`.
- **Functions and Member Functions:**
  Functions like `std::toupper` are used for character conversion, and C++ combines traditional functions with member functions (methods) within classes.
- **Namespaces and Syntax:**
  Using the `std` namespace (e.g., `std::cout`, `std::endl`) and i/o manipulators like `std::setw` for formatted output.
- **Input/Output Handling:**
  C++ I/O streams abstract away low-level details such as buffer flushing and provide better type safety.

---

## ex:01 - My Awesome PhoneBook

### Plan
1. **Class Design:**
   - **Contact Class:**
     - **Fields:** `firstName`, `lastName`, `nickname`, `phoneNumber`, `darkestSecret`.
     - **Methods:**
       - `set_data()`: Prompt the user and fill in the contact’s fields (fields cannot be empty).
       - `display_data()`: Display the full details of the contact.
   - **PhoneBook Class:**
     - **Fields:**
       - An array of 8 `Contact` objects.
       - `current_contact`: Tracks where the next contact should be stored (implemented as a circular buffer).
     - **Methods:**
       - `add_contact()`: Prompt for user input for each field (using a helper function to ensure non-empty entries) and store the contact.
       - `search_contacts()`:
         - Display a table of contacts with 4 columns: index, first name, last name, nickname, and phone number.
         - Each column is fixed at 10 characters wide and right-aligned.
         - If a field is longer than 10 characters, truncate it (display first 9 characters and a dot).
         - Then prompt the user to enter an index and display full details of the selected contact.
       - `display_index()`: Read and validate the index from the user and display the chosen contact.

2. **Handling Commands:**
   - **ADD:** Collect and store contact information.
   - **SEARCH:** Display a formatted contacts table and allow the user to view details.
   - **EXIT:** Quit the program.
   - Ignore any unrecognized commands.

3. **Formatting Output:**
   - Use `<iomanip>` (e.g., `std::setw(10)`) to create fixed-width, right-aligned columns.
   - Create a helper function to truncate strings longer than 10 characters.

### Lessons Learned (ex:01)
- **Classes & Objects:**
  A class is a blueprint that encapsulates data and behavior. Creating an object is instantiating that blueprint.
- **Member Functions (Methods):**
  These functions, defined inside a class, enable objects to perform actions. They are central to object-oriented programming.
- **Encapsulation & Data Validation:**
  Keeping data private and using setter functions ensures data integrity (e.g., rejecting empty inputs).
- **I/O Formatting:**
  Techniques like using `std::setw` and string manipulation (`substr()`) make output clean and user-friendly.

---

## ex:02 - The Job Of Your Dreams

### Plan
1. **Recreate Account.cpp Output:**
   - **Creation Logs:**
     For each account created, print:
     ```
     [timestamp] index:<account_index>;amount:<initial_amount>;created
     ```
   - **Global Summary:**
     Print a summary showing total accounts, total amount, total deposits, and total withdrawals.
   - **Account Details:**
     For each account, print a detailed status line:
     ```
     [timestamp] index:<account_index>;amount:<current_amount>;deposits:<nbr_deposits>;withdrawals:<nbr_withdrawals>
     ```
   - **Deposit/Withdrawal Logs:**
     For each deposit and withdrawal, log the operation with previous amount, the operation amount, new amount, and update counts.
   - **Closure Logs:**
     When an account is closed, log the final status.

2. **Data Source:**
   - Use provided arrays in `tests.cpp` (e.g., `amounts[]`, `d[]`, `w[]`) to determine initial amounts and transaction values.

3. **Implementation Approach:**
   - **Account Class:**
     - **Static Members:** Track total accounts, overall amount, and total number of deposits/withdrawals.
     - **Constructor/Destructor:**
       The constructor initializes the account and logs its creation. The destructor logs its closure.
     - **Member Functions:**
       Implement `makeDeposit()`, `makeWithdrawal()`, `displayStatus()`, and `checkAmount()`.
     - **Timestamping:**
       Use a helper function `_displayTimestamp()` that uses `<ctime>` to print the current time in `[YYYYMMDD_HHMMSS]` format.

### Lessons Learned (ex:02)
- **Static Members:**
  How to use static variables to share state across all instances of a class.
- **Constructor & Destructor:**
  Constructors initialize objects and update static counters, while destructors handle cleanup and logging.
- **Time Functions:**
  Using `<ctime>` functions (`std::time`, `std::localtime`, `std::strftime`) to generate formatted timestamps.
- **Detailed Logging:**
  Logging operations (creation, deposits, withdrawals, closure) helps trace program behavior and verify correctness.
- **Incremental Development:**
  Building your class step by step (using stubs, TODO comments) and testing with provided logs and tests strengthens your problem-solving skills.

---

## Final Thoughts

Throughout Module 00, I learned how to structure C++ programs using classes, static members, and proper I/O techniques. I also gained practical experience with data validation, logging, and working with time functions. Each exercise built upon the previous one, deepening my understanding of object-oriented programming and preparing me for more complex projects.
