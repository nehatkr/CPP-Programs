#include<iostream>
#include<string>
#include<vector>
#include<sstream> //for string manipulation
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<string> workout_data = {
        "Day 1 Monday:25",
        "Day 2 Monday:26",
        "Day 3 Monday:23",
        "Day 4 Monday:15",
        "Day 5 Monday:14",
        "Day 6 Monday:38",
        "Day 7 Monday:44"
    
    };

    int total_min =0;
    for ( const string &entry : workout_data) //& used for avoid creating a copy , this loop is used fo the iterate over each element of workout_data
    {
        size_t colon_pos = entry.find(":"); //use to find the position of ":"  , size_t is used for find() or store size of arr
        int minutes = stoi(entry.substr(colon_pos+1)); //This create a substring starting from the character immediately after the colon.
        total_min = total_min + minutes;
    }
    double average_min = total_min/7.0;

    cout<<"Sum of workout time is:"<<total_min<<"minutes"<<endl;
    cout<<"Average workout time:"<<average_min<<"minutes"<<endl;

    return 0;
}
