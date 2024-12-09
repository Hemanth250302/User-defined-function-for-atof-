# User-Defined Atof Implementation

This project is a **User-Defined Atof Implementation** in C++ that demonstrates how to convert a string to a floating-point number (float) without using the predefined `atof` function. The program takes a string input and converts it into a floating-point number manually by parsing the integral and decimal parts.

---

## Features
- **Digit Identification:** Checks whether a character is a valid digit.
- **Power Function:** Computes the power of a number.
- **Integral and Decimal Parsing:** Separately handles parsing the integral and decimal parts of the string.
- **Sign Handling:** Handles both positive and negative numbers.

---

## Technologies Used
- **C++** for implementing the logic.
- **Standard Library**: Uses `<iostream>` for input/output operations.

---

## How to Use
1. Clone the repository to your local system:
    ```bash
    git clone <repository_url>
    ```
2. Compile the program using a C++ compiler.
3. Run the program and input a string representing a number.
4. The program will convert the string to a floating-point number using both the user-defined `userDefinedAtof` function and the predefined `atof` function.
5. View the output with the converted numbers.


---

## Customization
- You can modify the `isDigit` function to handle additional edge cases for character validation.
- If you need to expand the number format support, you can adjust the `parseIntegralPart` and `parseDecimalPart` functions.

---

## Future Enhancements
- Improve error handling for invalid input.
- Add support for scientific notation (e.g., "1.23e4").

---

## License
This project is licensed under the MIT License. Feel free to use and modify it as per your requirements.

---

## Contributing
Contributions are welcome! Feel free to submit issues or pull requests to improve the project.
