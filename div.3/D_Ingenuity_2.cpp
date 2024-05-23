#include <iostream>
#include <string>
using namespace std;

string distributeInstructions(int n, string instructions)
{
    // Initialize coordinates for rover and helicopter
    int x_rover = 0, y_rover = 0;
    int x_helicopter = 0, y_helicopter = 0;
    int money = 0; // Charlie's earned money

    // Initialize result string
    string result = "";

    // Iterate through the instructions
    for (int i = 0; i < n; ++i)
    {
        char instruction = instructions[i];
        cout << "Processing instruction " << i << ": " << instruction << endl;

        // Assign instruction alternatively to rover and helicopter
        if (i % 2 == 0)
        {
            // Assign to rover
            result += 'R';
            // Update rover's coordinates
            if (instruction == 'N')
                y_rover++;
            else if (instruction == 'S')
                y_rover--;
            else if (instruction == 'E')
                x_rover++;
            else if (instruction == 'W')
                x_rover--;
        }
        else
        {
            // Assign to helicopter
            result += 'H';
            // Update helicopter's coordinates
            if (instruction == 'N')
                y_helicopter++;
            else if (instruction == 'S')
                y_helicopter--;
            else if (instruction == 'E')
                x_helicopter++;
            else if (instruction == 'W')
                x_helicopter--;
        }

        // Check if both devices reached the same coordinates
        if (x_rover == x_helicopter && y_rover == y_helicopter)
        {
            return result;
        }

        // Update Charlie's earned money at the end of each month
        if (i % 2 != 0)
            money++;
    }

    // If both devices didn't reach the same coordinates, return "NO"
    return "NO";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string instructions;
        cin >> n >> instructions;

        // Output the result of distributing instructions
        cout << distributeInstructions(n, instructions) << endl;
    }

    return 0;
}
