#include <iostream>
#include <limits>
#include <vector>
#include <sstream>
#include <algorithm>

#include "exercise.hpp"

ContestExerciseImpl::ContestExerciseImpl() : Exercise() {}

vector<int> determineBestFriends(int distances[],int number_friends,int number_best_friends)
{
    vector<int> best_friends_indexes;
    
    for (int i = 0; i < number_best_friends; i++)
	{
		int min_distance = 1000;
		int pos = -1;
		for (int y = 0; y < number_friends; y++)
		{
			if (distances[y] < min_distance && (find(best_friends_indexes.begin(), best_friends_indexes.end(), y) == best_friends_indexes.end()))
			{
				min_distance = distances[y];
				pos = y;
			}
		}
		best_friends_indexes.push_back(pos);
	}
    return best_friends_indexes;
}

void ContestExerciseImpl::main() {
    int myNotes[5];
    int number_friends, number_best_friends;
    for(int i = 0; i < 5; i++)
        cin >> myNotes[i];
    cin >> number_friends >> number_best_friends;
    int distances[number_friends] {0};
    int notes[number_friends][6];
    
    for(int i = 0; i < number_friends; i++)
    {
        for(int y = 0; y < 6; y++)
            cin >> notes[i][y];
        for(int y = 0; y < 5; y++)
            distances[i] += abs(notes[i][y]-myNotes[y]);
    }
    
    vector<int> best_friends_indexes  = determineBestFriends(distances, number_friends, number_best_friends);
    
    int sum = 0;    
    for(int i = 0; i < number_best_friends; i++)
        sum += notes[best_friends_indexes[i]][5];   
        
    cout << sum/number_best_friends;
}