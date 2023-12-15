A readme file on 0x14. C - Bit manipulation
Bit manipulation involves the manipulation of individual bits within a binary representation of data. In most programming languages, data is stored and processed in binary form at the lowest level. Understanding and using bit manipulation can be beneficial for various tasks, such as optimizing algorithms, working with hardware interfaces, and performing certain mathematical operations efficiently. Here are some key concepts related to bit manipulation:
Binary Representation:

In a binary system, data is represented using only two digits: 0 and 1.
Each digit is called a bit (binary digit), and a sequence of 8 bits is commonly referred to as a byte.
Basic Bitwise Operations:

AND (&): Performs a bitwise AND operation. The result is 1 only if both corresponding bits are 1.
OR (|): Performs a bitwise OR operation. The result is 1 if at least one corresponding bit is 1.
XOR (^): Performs a bitwise XOR (exclusive OR) operation. The result is 1 if the corresponding bits are different.
NOT (~): Performs a bitwise NOT operation. Flips each bit (1 becomes 0, and 0 becomes 1).
Shift Operations:

Left Shift (<<): Shifts the bits to the left by a specified number of positions, filling the vacant positions with zeros.
Right Shift (>>): Shifts the bits to the right by a specified number of positions. The vacant positions are filled based on the sign bit for signed integers or with zeros for unsigned integers.
Bitwise Manipulation Examples:

Setting a Bit (bitwise OR): To set a specific bit to 1, perform a bitwise OR operation with a mask containing 1 at the desired bit position.
Clearing a Bit (bitwise AND with complement): To set a specific bit to 0, perform a bitwise AND operation with a mask containing 0 at the desired bit position.
Toggling a Bit (bitwise XOR): To flip the value of a specific bit, perform a bitwise XOR operation with a mask containing 1 at the desired bit position.
Checking a Bit: Use a bitwise AND operation to check if a specific bit is set or clear.
