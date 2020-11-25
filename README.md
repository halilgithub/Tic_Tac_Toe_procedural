# Tic_Tac_Toe

I developed this console application for a coding task.

## Notes
I followed a simple design and procedural approach (no need for OOP).
I didn't add too many inline comments for easy read&review.

For the board slots, I used std::array which is better than C-style array. There is no need for vector because number of board slots(9) is known in compile-time.

I declared two global variables out of main. If I had declared them in main function, I  would have to pass them as ref param to the functions each time and this would be a bad idea.

First version executable is ready in bin folder. I created and tested it on Windows 10 using MinGW/GCC by executing following command in project folder:

g++ -lstdc++ -std=c++17 -o bin/binary_for_windows main.cpp

