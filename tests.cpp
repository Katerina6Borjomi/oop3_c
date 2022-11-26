#include <iostream>
#include "gtest/gtest.h"
#include "functions.h"

using namespace std;

TEST(vector_constructor, constructor_int1){
    oop3b::Vector_3 v(4);
    string str = "XXXX";
    ASSERT_EQ(v.get_mass(), str);
}

TEST(vector_constructor, constructor_int2){
    oop3b::Vector_3 v(8);
    string str = "XXXXXXXX";
    ASSERT_EQ(v.get_mass(), str);
}

TEST(vector_constructor, constructor_str1){
    oop3b::Vector_3 v("101100");
    string str = "101100";
    ASSERT_EQ(v.get_mass(), str);
}

TEST(vector_constructor, constructor_str2){
    oop3b::Vector_3 v("10110010101");
    string str = "10110010101";
    ASSERT_EQ(v.get_mass(), str);
}

TEST(vector_oper, oper_and1){
    oop3b::Vector_3 v("10110010101");
    oop3b::Vector_3 v1("11110010101");
    string res = "10110010101";
    oop3b::Vector_3 v_res = v.operator*(v1);
    ASSERT_EQ(v_res.get_mass(), res);
}

TEST(vector_oper, oper_and2){
    oop3b::Vector_3 v("10X1001XXXX");
    oop3b::Vector_3 v1("1101001010X");
    string res = "10010010X0X";
    oop3b::Vector_3 v_res = v.operator*(v1);
    ASSERT_EQ(v_res.get_mass(), res);
}

TEST(vector_oper, oper_or1){
    oop3b::Vector_3 v("10110010101");
    oop3b::Vector_3 v1("11110010101");
    string res = "11110010101";
    oop3b::Vector_3 v_res = v.operator+(v1);
    ASSERT_EQ(v_res.get_mass(), res);
}

TEST(vector_oper, oper_or2){
    oop3b::Vector_3 v("10X1001XXXX");
    oop3b::Vector_3 v1("1101001010X");
    string res = "11X1001X1XX";
    oop3b::Vector_3 v_res = v.operator+(v1);
    ASSERT_EQ(v_res.get_mass(), res);
}

TEST(vector_oper, oper_eq1){
    oop3b::Vector_3 v("10110");
    oop3b::Vector_3 v1("11010");
    string res = "10011";
    oop3b::Vector_3 v_res = v.operator==(v1);
    ASSERT_EQ(v_res.get_mass(), res);
}

TEST(vector_oper, oper_eq2){
    oop3b::Vector_3 v("10X0X");
    oop3b::Vector_3 v1("111X0");
    string res = "10XXX";
    oop3b::Vector_3 v_res = v.operator==(v1);
    ASSERT_EQ(v_res.get_mass(), res);
}

TEST(vector_oper, oper_more1){
    oop3b::Vector_3 v("10110");
    oop3b::Vector_3 v1("11010");
    string res = "00100";
    oop3b::Vector_3 v_res = v.operator>(v1);
    ASSERT_EQ(v_res.get_mass(), res);
}

TEST(vector_oper, oper_more2){
    oop3b::Vector_3 v("10X0X");
    oop3b::Vector_3 v1("111X0");
    string res = "0000X";
    oop3b::Vector_3 v_res = v.operator>(v1);
    ASSERT_EQ(v_res.get_mass(), res);
}

TEST(vector_oper, oper_less1){
    oop3b::Vector_3 v("10110");
    oop3b::Vector_3 v1("11010");
    string res = "01000";
    oop3b::Vector_3 v_res = v.operator<(v1);
    ASSERT_EQ(v_res.get_mass(), res);
}

TEST(vector_oper, oper_less2){
    oop3b::Vector_3 v("10X0X");
    oop3b::Vector_3 v1("111X0");
    string res = "01XX0";
    oop3b::Vector_3 v_res = v.operator<(v1);
    ASSERT_EQ(v_res.get_mass(), res);
}

TEST(vector_oper, oper_more_eq1){
    oop3b::Vector_3 v("10110");
    oop3b::Vector_3 v1("11010");
    string res = "10111";
    oop3b::Vector_3 v_res = v.operator>=(v1);
    ASSERT_EQ(v_res.get_mass(), res);
}

TEST(vector_oper, oper_more_eq2){
    oop3b::Vector_3 v("10X0X");
    oop3b::Vector_3 v1("111X0");
    string res = "10XX1";
    oop3b::Vector_3 v_res = v.operator>=(v1);
    ASSERT_EQ(v_res.get_mass(), res);
}

TEST(vector_oper, oper_less_eq1){
    oop3b::Vector_3 v("10110");
    oop3b::Vector_3 v1("11010");
    string res = "11011";
    oop3b::Vector_3 v_res = v.operator<=(v1);
    ASSERT_EQ(v_res.get_mass(), res);
}

TEST(vector_oper, oper_less_eq2){
    oop3b::Vector_3 v("10X0X");
    oop3b::Vector_3 v1("111X0");
    string res = "1111X";
    oop3b::Vector_3 v_res = v.operator<=(v1);
    ASSERT_EQ(v_res.get_mass(), res);
}

TEST(vector_oper, oper_not1){
    oop3b::Vector_3 v("10110010101");
    string res = "01001101010";
    oop3b::Vector_3 v_res = v.operator~();
    ASSERT_EQ(v_res.get_mass(), res);
}

TEST(vector_oper, oper_not2){
    oop3b::Vector_3 v("10X1001XXXX1");
    string res = "01X0110XXXX0";
    oop3b::Vector_3 v_res = v.operator~();
    ASSERT_EQ(v_res.get_mass(), res);
}

TEST(vector_oper, oper_pos1){
    oop3b::Vector_3 v("10110010101");
    int r = v.positiveness();
    int rf = 0;
    ASSERT_EQ(r, rf);
}

TEST(vector_oper, oper_pos2){
    oop3b::Vector_3 v("10X1001XXXX1");
    int r = v.positiveness();
    int rf = 1;
    ASSERT_EQ(r, rf);
}