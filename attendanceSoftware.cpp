#include "..\..\headerFile\std_lib_facilities.h"

// this class is used in next version when I use the data base using class

/*
class dataBase{
private:
   vector<unsigned long long int> enrollment = {
       12019002002001,
       12019002002002,
       12019002002003,
       12019002002004,
       12019002002005,
       12019002002006,
       12019002002007,
       12019002002008,
       12019002002009,
       12019002002010
       };
    vector<string> studentName = {
        "Sourav",
        "Prem",
        "Jeet",
        "Rajdeep",
        "Prantik",
        "Shaknik",
        "Vishal",
        "Swastika",
        "Diganta",
        "Debkanta"
        };
public:


};

*/

int main(){

    // this is permanent data base
   const vector<unsigned long long int> enrollment = {
       12019002002001,
       12019002002002,
       12019002002003,
       12019002002004,
       12019002002005,
       12019002002006,
       12019002002007,
       12019002002009,
       12019002002010,
       12019002002011
       };
    const vector<string> studentName = {
        "Sourav",
        "Prem",
        "Jeet",
        "Rajdeep",
        "Prantik",
        "Shaknik",
        "Vishal",
        "Swastika",
        "Diganta",
        "Debkanta"
        };

        // database end here
    int DB_En_Size = (int)enrollment.size();
    vector<unsigned long long int> userEnrollment;
    cout<< "Enter the students enrollment number" << endl;

    // now we  have to store the data from user
    unsigned long long int enroll;
    while(cin >>enroll){
        userEnrollment.push_back(enroll);
    }
    int user_Enroll_Size = (int)userEnrollment.size();

    // now we have to convert the enrollment no into 14 digit
    int userEnlen;
    for(int i=0; i<user_Enroll_Size;i++){
        userEnlen = to_string(userEnrollment[i]).length();
        switch(userEnlen){
        case 1:
        case 2:
        case 3:
            userEnrollment[i]+=12019002002000;
            break;
        case 4:
        case 5:
        case 6:
            userEnrollment[i]+=12019002000000;
            break;
        default:
            userEnrollment[i];

        }

    }

    sort(userEnrollment.begin(), userEnrollment.end());

    for(int i=0; i<user_Enroll_Size;i++){
         for(int j=0; j<DB_En_Size;j++){
            if(userEnrollment[i]==enrollment[j]){
               cout<< enrollment[j]<<"  ::  " << studentName[j]<<endl;
               break;
            }
            else{
                if(DB_En_Size-1==j){
                    cout<< userEnrollment[i]<< "  ::  " <<"is not register in data base"<<endl;
                    }
            }
         }
    }


    return 1;
}
