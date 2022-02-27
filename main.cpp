#include <iostream>
#include <vector>
#include <map>

using namespace std;

void printMatrix(int rows = 3, int cols = 5){
    vector< vector<int> > matrix;

    for(int i = 0; i < rows; i++){
        vector<int> row;
        for(int j = 1; j <= cols; j++){
            row.push_back(i * cols + j);
        }
        matrix.push_back(row);
    }

    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[i].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

vector<string> splitStr(string str, string delimiter){
    vector<string> splitVec;
    string currentStr = "";
    for(int i = 0; i < str.length(); i++){
        string s;
        s.push_back(str[i]);
        if(s == delimiter){
            splitVec.push_back(currentStr);
            currentStr = "";
        } else {
            currentStr += str[i];
        }
    }
    if(currentStr.length() != 0){
        splitVec.push_back(currentStr);
    }
    return splitVec;
}

string joinStrVec(vector<string> strVec, string delimiter){
    string str = "";

    for(int i = 0; i < strVec.size(); i++){
        str += strVec[i];

        if(i != strVec.size()-1){
            str += delimiter;
        }
    }

    return str;
}

int main() {

    vector<string> strVec = splitStr("I love Genevieve", " ");

    // Remove element in 1st position ("love");
    strVec.erase(strVec.begin() + 1);
    
    for(int i = 0; i < strVec.size(); i++){
        cout << strVec[i] << endl;
    }

    string joined = joinStrVec(strVec, " ");
    cout << joined << endl;

    return 0;
}

