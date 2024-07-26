#include <iostream>
#include <string>

using namespace std;

class Student {
    private:
        int id;
        string name;
        int age;
        string address;
        int score;

    public:
        Student() {

        }  

        Student(int id, string name, int age, string address, int score) {
            this->id = id;
            this->name = name;
            this->age = age;
            this->address = address;
            this->setScore(score);
        }

        void setId(int id) {
            this->id = id;
        }

        int getId() {
            return id;
        }

        void setName(string name) {
            this->name = name;
        }

        string getName() {
            return name;
        }

        void setAge(int age) {
            this->age = age;
        }

        int getAge() {
            return age;
        }

        void setAddress(string address) {
            this->address = address;
        }

        string getAddress() {
            return address;
        }

        void setScore(int score) {
            if(score < 0) this->score = 0;
            else if (score > 10) this->score = 10;
            else this->score = score;
        }

        int getScore() {
            return score;
        }
};