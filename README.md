**(a) Inputs and Outputs**
*   **Inputs:** Electricity units used in a month in kWh (int).
*   **Outputs:** Energy charge in birr, fixed service charge in birr, and the total bill in birr (all formatted to exactly two decimal places).

**(b) Process**
1.  **Declare input:** Initialize a variable to store the user's electricity units.
2.  **Declare constants:** Initialize variables for the pricing rules (rate for the first 50 units = 1.50, rate for units above 50 = 2.00, fixed service charge = 10.00).
3.  **Declare outputs:** Initialize variables to store the resulting energy charge and total bill.
4.  **Ask user:** Ask for and read the total electricity units consumed in kWh.
5.  **Calculate energy charge:** Use the conditional operator (condition ? true_result : false_result) to determine the tier:
    *   If units <= 50: Multiply units by 1.50.
    *   If units > 50: Multiply 50 by 1.50, then add (units - 50) multiplied by 2.00.
6.  **Calculate total bill:** Add the calculated energy charge to the fixed service charge.
7.  **Format output:** Configure the output stream using <iomanip> (fixed and setprecision(2)) to ensure all financial results display with exactly two decimal places.
8.  **Print results:** Display the calculated energy charge, the constant service charge, and the final total bill to the screen.
