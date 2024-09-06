# Challenge Project: Credit Card Checker
## Project Goal:
Check credit card numbers to see whether or not they are vaild or not. This project will help me reinforce some key JavaScript fundamentals such as loops and functions to be able to optimize the verification process.
## Project Requirements:
<ul>
    <li>There are 15 arrays that each contain the digits of separate credit card numbers. THey all have prefixes that reflext their status, i.e. variables that start with <code>valid</code> contain a vaild number, whereas <code>invalid</code> do not, and <code>mystery</code> variables can be either. There is also a <code>batch</code> array that stores all of the provided credit cards in a single array.</li>
    <li>Create a function, <code>validateCred()</code> that has a parameter of an array. The prupose of this function is to return <code>true</code> when an array contains digits of a valid credit card number and <code>false</code> when it is invalid. THis function should <strong>NOT</strong> mutate the valeus of the original array.</li>
    <li>To find out if the credit car number is valid or not, use the <strong>Luhn algorithm</strong>:
    <ol>
        <li>Starting from the farthest digit to the right (the check digit) iterate to the left.</li>
        <li>As you iterate to the left, every other digit is doubled (the check digit is not doubled). If the number is greater than <code>9</code> after doubling, subtract <code>9</code> from its value.</li>
        <li>Sum up all the digits in he credit card number</li>
        <li>If the sum modulo <code>10</code> is <code>0</code> then the number is valid, otherwise, it's invalid</li>
    </ol></li>
    <li>Create a function <code>findInvalidCard()</code> that has one parameter for a nested array of credit card numbers. The role of this function is to check through the nested array for which numbers are invalid, and return another nested array of invalid cards.</li>
    <li>Create a function <code>idInvalidCardCompanies()</code> that has one parameter for a nested array of invalid numbers and returns an array of companies. This function returns an array of companies that have provided cards with invalid numbers. This return array should not have doublicates.</li>
</ul>

Currently, there are 4 accepted companies which each have unique first digits. The following table shows which digit is unique to which company:
<table>
    <thead>
        <th>
        <td>First Digit</td>
        <td>Company</td>
        </th>
    </thead>
    <tbody>
        <tr>
            <td>3</td>
            <td>Amex (American Express)</td>
        </tr>
        <tr>
            <td>4</td>
            <td>Visa</td>
        </tr>
        <tr>
            <td>5</td>
            <td>Mastercard</td>
        </tr>
        <tr>
            <td>6</td>
            <td>Discover</td>
        </tr>
    </tbody>
</table>
If the number doesn't start with any of the numbers listed, print out a message: "Company not found".
