# Project: Rectangle Area Calculator

## Objective: Create a C++ program that calculates the area of a rectangle.
I created this project for myself to cement C++ compiling, linking and assembling in my mind.
### Requirements:

Knowledge of basic C++ syntax.
Familiarity with compiling and running C++ programs.
Steps:

#### Write the C++ code:
Open your preferred text editor or IDE and create a new file named rectangle-area-calculator.cpp. Write the C++ code to calculate the area of a rectangle based on user input for length and width. Here's a basic template:


```
#include <iostream>

using namespace std;

int main() {
    double length, width;
    
    cout << "Enter length of the rectangle: ";
    cin >> length;
    
    cout << "Enter width of the rectangle: ";
    cin >> width;
    
    double area = length * width;
    
    cout << "Area of the rectangle: " << area << endl;
    
    return 0;
}
```
Save the file: Save the rectangle-area-calculator.cpp file in your desired directory.

#### Compile the program:
Open your terminal or command prompt, navigate to the directory containing rectangle_area.cpp, and compile the program using g++:

```
g++ -o rectangle-area-calculator rectangle-area-calculator.cpp
```
This will generate an executable file named rectangle-area-calculator.

#### Run the program:
Execute the compiled program:

```
./rectangle-area-calculator
```
Follow the prompts to enter the length and width of the rectangle, and the program will calculate and display the area.

#### Test the program:
Test the program with various input values to ensure it calculates the area correctly.

## With Visual Studio Compiler:
Even though Visual Studio provides a convenient integrated development environment, you can still compile and link your Visual Studio solution from the command line if you wish to have more control or if you're working on a system without the Visual Studio IDE installed. Here's how you can do it:

Open the Developer Command Prompt for Visual Studio: This special command prompt sets up the environment variables necessary for using Visual Studio's command-line tools.

You can find the Developer Command Prompt for Visual Studio in the Start menu under Visual Studio tools or by searching for it.
Navigate to your project directory: Use the cd command to navigate to the directory containing your Visual Studio solution file (.sln file) or the directory containing your project files.

Build the solution: Use the msbuild command to build your Visual Studio solution. This command will compile, link, and generate the executable.

If your solution file is named MySolution.sln, you can build it with the following command:
```
msbuild MySolution.sln
```
This will compile and link all projects within the solution.

Locate the output executable: Once the build process is complete, you can find the output executable in the appropriate project's bin directory. The exact location may vary depending on your project settings.






