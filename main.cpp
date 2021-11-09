#include <iostream>
#include <string>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int numQuestions;
    int numRight = 0;
    int numWrong = 0;
    int count = 0;
    int keyNum;
    std::string userCapital;

    srand(time(NULL));

    numQuestions = rand() % 49 + 1;

    std::cout << "Number of questions: " << numQuestions << std::endl;

    std::map<int, std::string> states;
    std::map<int, std::string> capitals;

    capitals[1] = "Montgomery";
    capitals[2] = "Juneau";
    capitals[3] = "Phoenix";
    capitals[4] = "Little Rock";
    capitals[5] = "Sacramento";
    capitals[6] = "Denver";
    capitals[7] = "Hartford";
    capitals[8] = "Dover";
    capitals[9] = "Tallahassee";
    capitals[10] = "Atlanta";
    capitals[11] = "Honolulu";
    capitals[12] = "Boise";
    capitals[13] = "Springfield";
    capitals[14] = "Indianapolis";
    capitals[15] = "Des Moines";
    capitals[16] = "Topeka";
    capitals[17] = "Frankfort";
    capitals[18] = "Baton Rouge";
    capitals[19] = "Augusta";
    capitals[20] = "Annapolis";
    capitals[21] = "Boston";
    capitals[22] = "Lansing";
    capitals[23] = "Saint Paul";
    capitals[24] = "Jackson";
    capitals[25] = "Jefferson City";
    capitals[26] = "Helena";
    capitals[27] = "Lincoln";
    capitals[28] = "Carson City";
    capitals[29] = "Concord";
    capitals[30] = "Trenton";
    capitals[31] = "Santa Fe";
    capitals[32] = "Albany";
    capitals[33] = "Raleigh";
    capitals[34] = "Bismarck";
    capitals[35] = "Columbus";
    capitals[36] = "Oklahoma City";
    capitals[37] = "Salem";
    capitals[38] = "Harrisburg";
    capitals[39] = "Providence";
    capitals[40] = "Columbia";
    capitals[41] = "Pierre";
    capitals[42] = "Nashville";
    capitals[43] = "Austin";
    capitals[44] = "Salt Lake City";
    capitals[45] = "Montpelier";
    capitals[46] = "Richmond";
    capitals[47] = "Olympia";
    capitals[48] = "Charleston";
    capitals[49] = "Madison";
    capitals[50] = "Cheyenne";
    capitals[51] = "None";

    states[1] = "Alabama";
    states[2] = "Alaska";
    states[3] = "Arizona";
    states[4] = "Arkansas";
    states[5] = "California";
    states[6] = "Colorado";
    states[7] = "Connecticut";
    states[8] = "Delaware";
    states[9] = "Florida";
    states[10] = "Georgia"; 
    states[11] = "Hawaii";
    states[12] = "Idaho";
    states[13] = "Illinois";
    states[14] = "Indiana";
    states[15] = "Iowa";
    states[16] = "Kansas";
    states[17] = "Kentucky";
    states[18] = "Louisiana";
    states[19] = "Maine";
    states[20] = "Maryland";
    states[21] = "Massachusetts";
    states[22] = "Michigan";
    states[23] = "Minnesota";
    states[24] = "Mississippi";
    states[25] = "Missouri";
    states[26] = "Montana";
    states[27] = "Nebraska";
    states[28] = "Nevada";
    states[29] = "New Hampshire";
    states[30] = "New Jersey";
    states[31] = "New Mexico";
    states[32] = "New York";
    states[33] = "North Carolina";
    states[34] = "North Dakota";
    states[35] = "Ohio";
    states[36] = "Oklahoma";
    states[37] = "Oregon";
    states[38] = "Pennsylvania";
    states[39] = "Rhode Island";
    states[40] = "South Carolina";
    states[41] = "South Dakota";
    states[42] = "Tennessee";
    states[43] = "Texas";
    states[44] = "Utah";
    states[45] = "Vermont";
    states[46] = "Virginia";
    states[47] = "Washington";
    states[48] = "West Virginia";
    states[49] = "Wisconsin";
    states[50] = "Wyoming";

    while (count < numQuestions)
    {
        keyNum = rand() % 49 + 1;
        std::cout << count + 1 << ".) What is the capital of " << states[keyNum] << "?" << std::endl;
        std::cout << "Capital: ";
        getline(std::cin, userCapital);
        if (userCapital == capitals[keyNum])
        {
            std::cout << "Correct!" << std::endl;
            numRight++;
        }
        else
        {
            std::cout << "Sorry, that is not correct." << std::endl;
            numWrong++;
        }
        count++;
    }

    std::cout << "Total Questions: " << numQuestions << std::endl;
    std::cout << "Total Correct: " << numRight << std::endl;
    std::cout << "Total Incorrect: " << numWrong << std::endl;
    return 0;
} 