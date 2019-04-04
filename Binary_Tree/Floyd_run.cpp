/**
    File    : Floyd_run.cpp
    Author  : Menashe Rosemberg
    Created : 2019.03.07            Version: 20190307.1

    Graph - Cycle Detection - Floyd Warshall

    Menashe Rosemberg   Israel +972-52-323-0538
    Copyright(c) 2019      All rights reserved.

    Software distributed under the MIT License is distributed on an "AS IS" BASIS,
    NO WARRANTIES OR CONDITIONS OF ANY KIND, explicit or implicit.

    Based on source code from: https://www.geeksforgeeks.org/floyd-warshall-algorithm-dp-16
**/
#include <iostream>
#include <iomanip>

#include "../_lib_/_Lib_Edge.h"
#include "Floyd.h"

#include <vector>

using namespace std;

void Run_Graph_Floyd() {
    /*
             10
       (0)------->(3)
        |         /|\
      5 |          |
        |          | 1
       \|/         |
       (1)------->(2)
             3
    */

    cout << "\n\t\t\t\tGraph - Cycle Detection - Floyd\n"
         << "\n\nResult expected:"
         << "\n   0  1  2  3"
         << "\n   ----------"
         << "\n 0|0  5  8  9"
         << "\n 1|   0  3  4"
         << "\n 2|      0  1"
         << "\n 3|         0"
         << "\n\nResult:";

                              // O  D  W
    vector<Edge> ListOfEdges {  {0, 1, 5},
                                {1, 2, 3},
                                {2, 3, 1},
                                {0, 3, 10}
    };

    Floyd F(ListOfEdges);
    WeightsMatrix WeM = F.ProcessFloydWarshall();

    for (auto& Lin : WeM) {
        cout << "\n\t";
        for (auto& Weight : Lin)
            if (Weight == numeric_limits<WeightType>::max())
                cout << "    ";
            else
                cout << setw(2) << Weight << "  ";
    }

}
