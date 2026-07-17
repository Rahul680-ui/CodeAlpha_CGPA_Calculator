#include<iostream>
#include<vector>
using namespace std;
   int main(){

    int numcourses;
    cout<<"Enter the number of courses : ";
    cin>>numcourses;

    vector<char> Grades;
    vector<int> Credits;
    
    int totalgradepoints = 0;
    int totalcredits = 0;

    cout<<"Enter grades and credit for each course : ";

    for(int i=0; i<numcourses; i++){
        char grades;
        int credits;
        cin>>grades>>credits;
        Grades.push_back(grades);
        Credits.push_back(credits);

    }
    for(int k=0; k<numcourses; k++){
     cout<<"course "<<k+1<<" : "
         <<" Grade "<<Grades[k]<<" "
         <<"Credit"<<Credits[k]<<endl;
    }
    for(int j=0; j<numcourses; j++ ){
        int gradepoint = 0;
        if(Grades[j] == 'O'){
            gradepoint = 10;
        }
        else if(Grades[j] == 'A'){
            gradepoint = 9; 
        }
        else if(Grades[j] == 'B'){
            gradepoint = 8;
        }
        else if(Grades[j] == 'C'){
            gradepoint = 7;
        }
        else if(Grades[j] == 'D'){
            gradepoint = 6;
        }
        else if(Grades[j] == 'E'){
            gradepoint = 5;
        }
        else if(Grades[j] == 'F'){
            gradepoint = 0;
        }
        else{
            cout<<"Invalid Grade";
            return 0;
        }
        totalgradepoints = totalgradepoints + Credits[j]*gradepoint;
        totalcredits = totalcredits + Credits[j];
    }
    float CGPA = (float)totalgradepoints/totalcredits;
    cout<<"Your CGPA is : ";
    cout<<CGPA;
   } 
