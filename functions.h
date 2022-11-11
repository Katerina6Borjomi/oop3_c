#ifndef OOP3B_FUNCTIONS_H
#define OOP3B_FUNCTIONS_H

using namespace std;

#include <cstring>
#include <cmath>


namespace oop3b{

    class Vector_3{
    private:
        int fact;
        char* vector;
    public:
        Vector_3();
        explicit Vector_3(int fact1);
        explicit Vector_3(const string& str);
        Vector_3(const Vector_3& vec); //коп
        Vector_3(Vector_3&& vec) noexcept;
        ~Vector_3(){
            delete []vector;
        }

        int get_fact();
        void set_fact(int fact1);
        string get_mass();
        Vector_3 operator * (Vector_3 b);
        Vector_3 operator + (Vector_3 b);
        void print_vector();
        Vector_3 operator == (Vector_3 b);
        Vector_3 operator > (Vector_3 b);
        Vector_3 operator < (Vector_3 b);
        Vector_3 operator >= (Vector_3 b);
        Vector_3 operator <= (Vector_3 b);
        Vector_3 operator ~ ();
        int positiveness();
        Vector_3& operator = (const Vector_3& b);
    };


    double get_d(string string1);
    int input_int();
    void printf_flag(int f);
}

#endif //OOP3B_FUNCTIONS_H