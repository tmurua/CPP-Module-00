# CPP-Module-00

## ex:00
### Plan
1. Check number of args. If there are no args print:
```
* LOUD AND UNBEARABLE FEEDBACK NOISE *
```
Then print a newline and exit.

2. Iterate over each argument.
   2.1. For each argument, iterate over each character.
   2.2. Convert each lowercase character to an uppercase character.
   2.3. Every other character there is not a lowercase must be printer as is.
   2.4. Print a newline and exit.

### Lessons Learned

1. **Objects in C++**:
   - `std::cout` is an object (not a function) representing the standard output stream.
   - Objects can replace functions like `printf` for cleaner, more modular code.

2. **Functions in C++**:
   - Functions like `std::toupper` are still used for specific tasks (e.g., character conversion).
   - C++ combines object-oriented programming (OOP) with traditional functions.

3. **Namespaces**:
   - The `std` namespace groups standard library features like `std::cout` and `std::toupper`.
   - Use `std::` to access these features unless brought into scope explicitly.

3. **C++ Syntax Differences**:
4. **C++ Syntax Differences**:
   - Output uses `std::cout <<` instead of `printf` in C.
   - The `std::endl` manipulator adds a newline and flushes the stream.

5. **Memory Management**:
   - Unlike in C, `std::cout` abstracts details like buffer flushing and memory handling.

## ex:01 - My Awesome PhoneBook

### Plan
1. **Create two classes in separate header files:**
   - **Contact:**
     - **Fields:** `firstName`, `lastName`, `nickname`, `phoneNumber`, `darkestSecret`.
     - **Methods:**
       - `set_data()`: Fill in the contact's data.
       - `display_data()`: Print all details of the contact.
   - **PhoneBook:**
     - **Fields:**
       - An array of 8 `Contact` objects.
       - `current_contact`: Tracks where the next contact is stored.
     - **Methods:**
       - `add_contact()`: Prompt user for contact data (fields cannot be empty) and store it (using a circular buffer).
       - `search_contacts()`:
         - Display a table of contacts with columns for index, first name, last name, nickname, and phone number.
         - Each column is 10 characters wide, right-aligned; if a field is longer than 10 characters, truncate it (first 9 chars + a dot).
         - Then prompt for an index and display the full details of that contact.
       - `display_index()`: Read the user's input (convert from string to int) and display the chosen contact.

2. **Handling Commands:**
   - **ADD:** Prompt for all fields and add the contact.
   - **SEARCH:** Display the contacts table, then prompt for an index to show full details.
   - **EXIT:** Quit the program.
   - **Other:** Ignore unrecognized commands.

3. **Formatting Output:**
   - Use `<iomanip>` (e.g., `std::setw(10)`) for fixed-width, right-aligned columns.
   - Use a helper function to truncate strings longer than 10 characters (show first 9 characters + a dot).

4. **Main Flow:**
   - Create a `PhoneBook` instance.
   - Loop until the user enters "EXIT", handling ADD and SEARCH commands accordingly.

5. **Constraints:**
   - No dynamic allocation (no `new`/`delete`).
   - After 8 contacts, new contacts overwrite the oldest.
   - Fields cannot be empty when adding a contact.

### Lessons Learned (ex:01)
- **Classes & Objects:**
  A class is a blueprint that defines a data type and its behavior (attributes and member functions).
  - Example: `std::string` is a class. When you write `std::string example;` you create an object of that class.
- **Member Functions:**
  A member function (or method) is a function defined inside a class. In C++ we often say "member function," but in other languages they’re called "methods." They allow objects to perform actions.
- **C-style vs. C++ Strings:**
  - **C-style string:** A null-terminated array of characters (`char*`) without built-in management functions.
  - **C++ string (`std::string`):** A class that encapsulates character data and provides useful member functions like `size()`, `c_str()`, and `substr()`.
- **Instantiation & Data Types:**
  `std::string` is a class (and thus a data type). When you create a variable of that type, you are instantiating an object. In C++, variables of class types are objects that have both state and behavior.

   - **Note on member functions:**
     Both `size()` and `c_str()` are member functions of `std::string`—they come built-in with the class.

     - *Example Comment:*
       `// c_str() converts a C++ std::string to a C-style string (char array) needed by functions like atoi.`

       `// size() returns the number of characters in the string.`

       `// substr(0, 9) extracts the first 9 characters of the string, allowing us to add a '.' for truncation.`

### Next Steps
- Implement the classes (`Contact.hpp/cpp` and `PhoneBook.hpp/cpp`).
- Write `main.cpp` to handle user commands (ADD, SEARCH, EXIT).
- Create a Makefile to build the executable (e.g., `phonebook`).
