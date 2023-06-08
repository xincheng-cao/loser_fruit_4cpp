//
// Created by DerbySoftI88 on 2023/6/6.
//
#include <set>
#include <iostream>


class ExamRoom {
private:
    //std::set<int> ordered_seat_set=std::set<int>();
    //std::set<int> ordered_seat_set={};
    std::set<int> ordered_seat_set{};
    int seat_len;
public:
    ExamRoom(int n) :seat_len(n){}

    int seat() {

    }

    void leave(int p) {

    }
};

/**
 * Your ExamRoom object will be instantiated and called as such:
 * ExamRoom* obj = new ExamRoom(n);
 * int param_1 = obj->seat();
 * obj->leave(p);
 */