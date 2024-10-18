#include <iostream>
#include <vector>
using namespace std;

int main(){
    //The number of test cases from the user.
    int t;
    cin >> t;

    //Initialing a vector array of t vectors, to store the results of the t cases.
    vector<int> results[t];

    for(int i=0; i<t; i++){
        //Getting the length of the array(Number of participants) from the user.
        int n;
        cin >> n;

        //Initializing a vector to store the value of strengths from the user. 
        vector<int> strengths(n);

        //Getting the value of strengths from the user and storing in the vector.
        for(int j=0;j<n;j++){
            int inp;
            cin >> inp;
            strengths[j] = inp;
        }

        int largest = 0, secondLargest = 0;

        for(int j : strengths){
            if(j >= largest){
                secondLargest = largest;
                largest = j;
            }else if(j < largest && j > secondLargest){
                secondLargest = j;
            }
        }

    
        for(int j : strengths){
            if(j == largest){
                results[i].push_back(j -  secondLargest);
            }else{
                results[i].push_back(j - largest);
            }
        } 

    }

    for(int i=0; i<t; i++){
        for(int j : results[i]){
            cout << j << " ";
        }
        cout << '\n';
    }

    return 0;
}