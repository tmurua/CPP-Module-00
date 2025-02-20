# CPP-Module-00

## ex:00
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

4. **C++ Syntax Differences**:
   - Output uses `std::cout <<` instead of `printf` in C.
   - The `std::endl` manipulator adds a newline and flushes the stream.

5. **Memory Management**:
   - Unlike in C, `std::cout` abstracts details like buffer flushing and memory handling.

## ex:01
### Plan
1. **Create two Classes in two different *.hpp files**
   - **Contact**
     - Create the following **private** fields (encapsulation) for each contact:
       - firstName, lastName, nickname, phoneNumber, darkestSecret
     - Create **public "set" methods** to fill in data with the **"ADD"** command that will be introduced later.
     - Create **public "get" methods** (**"display" methods**) to display the data with the **"SEARCH"** command that will be introduced later.

   - **PhoneBook**
     - Has a **private fixed array** contacts[8] of 8 Contact.
     - Keeps track of the **current index** to store a new contact.
       - If we exceed 8 contacts, overwrite the **oldest** contact.
     - Public methods:
       - addContact(): prompts user for data, fills a Contact.
       - searchContacts(): displays the list of contacts with formatted output (columns).
       - displayContact(index): prints the full details of one contact.

2. **Handling commands**
   - **ADD**
     1. Prompt the user for all 5 contact fields.
     2. Create or overwrite a Contact in the PhoneBook.
   - **SEARCH**
     1. Print a table of existing contacts (index, first name, last name, nickname).
        - Each column: **10 chars wide**, **right-aligned**. Truncate if needed (replace last char with .).
     2. Ask the user for an index.
     3. If index is valid, display that contact’s details (one field per line).
     4. If invalid, show an error or ignore.
   - **EXIT**
     - Quit the program.
   - **Other commands**
     - Ignore them and prompt again.

3. **Formatting output**
   - Use <iomanip> (std::setw(), std::right) for alignment.
   - Truncate strings over 10 characters, replace last char with a dot (.).

4. **Main program flow**
   1. Create a PhoneBook instance.
   2. Loop until the user enters EXIT.
   3. Read user input.
   4. If ADD, call phoneBook.addContact().
   5. If SEARCH, call phoneBook.searchContacts(), then prompt for an index.
   6. If EXIT, break the loop.
   7. Otherwise, ignore and ask again.

5. **Constraints**
   - No dynamic allocation (no new/delete).
   - Replace the **oldest** contact after 8 are saved.
   - Fields cannot be empty when adding a contact.

6. **Next steps**
   - Implement the classes (Contact.hpp/cpp and PhoneBook.hpp/cpp).
   - Write the main.cpp to handle user commands.
   - Create a Makefile that produces an executable (e.g., phonebook).

### Lessons Learned
1. **

2. **Method**
   Is a function that belongs to a class. Something that an object can do. An action it can perform.
