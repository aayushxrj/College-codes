#include <iostream>
using namespace std;
class Time{
    int hour;
    int minute;
    int second;
    public:
    Time(){
        hour=0;
        minute=0;
        second=0;
    }
    Time(int hour,int minute,int second){
        this->hour=hour;
        this->minute=minute;
        this->second=second;
    }
    friend istream& operator>>(istream &in, Time &t);
    friend class Student;
};
class Student{
    private:
    int rollNo;
    string name;
    int arrivalHour;
    int arrivalMinute;
    int arrivalSecond;
    public:
    friend istream& operator>>(istream &in, Student &s);
    friend ostream& operator<<(ostream &out, Student &s);
    bool isLate(Time expectTime){
        if (arrivalHour > expectTime.hour)
            return true;
        else if (arrivalHour == expectTime.hour && arrivalMinute > expectTime.minute)
            return true;
        else if (arrivalHour == expectTime.hour && arrivalMinute == expectTime.minute && arrivalSecond > expectTime.second)
            return true;
        return false;
    }
    float calcFine(Time expectTime){
        int lateSec = (arrivalHour - expectTime.hour) * 3600 + (arrivalMinute - expectTime.minute) * 60 + (arrivalSecond - expectTime.second);
        int lateMin = (lateSec) / 60; 
        return lateMin * 0.5f;
    }
};
istream& operator>>(istream &in, Time &t){
    in >> t.hour >> t.minute >> t.second;
    return in;
}
istream& operator>>(istream &in, Student &s){
    cout << "Enter roll no, name, and arrival time: ";
    in >> s.rollNo >> s.name >> s.arrivalHour >> s.arrivalMinute >> s.arrivalSecond;
    return in;
}
ostream& operator<<(ostream &out, Student &s){
    out << "Roll No: " << s.rollNo << " Name: " << s.name << endl;
    return out;
}

int main(){
    int studentNum;
    cout << "Enter number of students: ";
    cin >> studentNum;
    Student students[studentNum];
    for (int i=0; i<studentNum; i++){
        cout << "Enter details of student " << i+1 << endl;
        cin >> students[i];
    }
    Time expectTime;
    cout << "Enter expected time: ";
    cin >> expectTime;
    cout << "Late students:" << endl;
    for (int i=0; i<studentNum; i++){
        if (students[i].isLate(expectTime)){
            cout << students[i];
            cout << "Fine amount: " << students[i].calcFine(expectTime) << " rupees" << endl;
        }
    }
    return 0;
}