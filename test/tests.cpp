#include "gtest/gtest.h"
#include "Deanery.h"
#include "Student.h"
#include "Group.h"
#include <string>

TEST(testStudent, init1) {
Student S1;
S1.create("Maxim",1);
EXPECT_EQ("Maxim", S1.getName());
}

TEST(testGroup, init2) {
Group G1;
G1.create("AMI-1", "Aplied math");
EXPECT_EQ("AMI-1", G1.getName());
}

TEST(testSwap, init3) {
Deanery D1;
Group G1;
G1.create("AMI-1", "Aplied math");
Group G2;
G2.create("EC-2", "Economics");
Student S1;
S1.create("Maxim",1);
Student S2;
S2.create("Jora",1);
G1.addstud(&S1);
G2.addstud(&S2);
D1.StudSwap("Jora","EC-2");

EXPECT_EQ(2, G2.getSize());
}

TEST(testDel, init4) {

Group G1;
G1.create("AMI-1", "Aplied math");
Student S1;
S1.create("Maxim",1);
Student S2;
S2.create("Jora",1);
G1.addstud(&S1);
G1.addstud(&S2);
G1.delStud(1);

EXPECT_EQ(1, G1.getSize());
}

TEST(testMarks, init4) {


Student S1;
S1.create("Petya",11);
S1.addmark();
S1.addmark();
S1.addmark();
EXPECT_EQ(3, S1.getMarkssize());
}