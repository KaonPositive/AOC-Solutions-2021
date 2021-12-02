#include <iostream>
#include <fstream>
#include <vector>

// void findNumbers()
// {
//     std::ifstream in("adventOfCodeDayOne.txt");
//     std::vector<int> list;
//     int number;
//         // convert to int and push to vector
//         while (in >> number) list.push_back(number);

//         int increasePartA{0};
//         int increasePartB{0};
//         // for loop to loop length times
//         for (int i{0}; i < list.size(); ++i) {
//             if ( list[i+1] - list[i] > 0 ) ++increasePartA;

//             if ( list[i+2] + list[i+1] + list[i] < list[i+1] + list[i+2] + list[i+3]) ++increasePartB;
//         }

//         std::cout << "Part A: " << increasePartA << std::endl;
//         std::cout << "Part B: " << increasePartB << std::endl;
// }


int main()
{
    std::ifstream in( "inputDayOne.txt" );
    std::vector<int> list;
    int number;

    while ( in >> number ) list.push_back( number );

    int increasePartA{0};
    int increasePartB{0};

    for ( int i{0}; i < list.size(); ++i ) {
        if ( list[i+1] > list[i] ) ++increasePartA;

        if ( list[i] + list[i+1] + list[i+2] < list[i+1] + list[i+2] + list[i+3] ) ++increasePartB;
    }

    std::cout << "Part A: " << increasePartA << std::endl;
    std::cout << "Part B: " << increasePartB << std::endl;

    return 0;
}