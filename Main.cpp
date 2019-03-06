/**
    File    : Main.cpp
    Author  : Menashe Rosemberg
    Created : 2019.03.02            Version: 20190306.1

    Construct a simple question and wait the answer

    Menashe Rosemberg   Israel +972-52-323-0538
    Copyright(c) 2019      All rights reserved.

    Software distributed under the License is distributed on an "AS IS" BASIS,
    NO WARRANTIES OR CONDITIONS OF ANY KIND, explicit or implicit.
**/

#include <vector>
#include "Ask.h"

void Run_Cycle_Detection_in_Linked_List_Brent();
void Run_BinaryTreeSearch_DFS_Interactive();
void Run_BinaryTreeSearch_BFS();
void Run_Dynamic_Programming_Kadane();
void Run_Dynamic_Programming_Knapsack_0_1();
void Run_Dynamic_Programming_LCS();
void Run_Dynamic_Programming_LPS();
void Run_Greedy_Kruskal();
void Run_Greedy_Dijkastra();
void Run_Graph_Floyd();

int main() {

    std::vector<std::string> Options {
                                "Cycle_Detection in Linked List- Brent",
                                "Binary Tree Search - DFS Interactive",
                                "Binary Tree Search - BFS",
                                "Dynamic Programming- Kadane",
                                "Dynamic Programming- Knapsack 0 1",
                                "Dynamic Programming- LCS",
                                "Dynamic Programming- LPS",
                                "Graph - Minimum Spanning Tree - Floyd Warshall",
                                "Graph - Greedy - Minimum Spanning Tree - Kruskal",
                                "Graph - Greedy - Minimum Spanning Tree - Dijkastra",
                                "Exit"
    };

    Ask TheQuestion;
    TheQuestion << "\n\nChoose the Algorithm you are leaning:\n";
    TheQuestion.hastheAnswers(move(Options));
    TheQuestion.hastheBehavior(ASK::ANSWARE_BY_LETTERS);

    for(;;) {
        char Answer = TheQuestion.wasmade();

        switch (Answer) {
            case 'a': Run_Cycle_Detection_in_Linked_List_Brent();   continue;
            case 'b': Run_BinaryTreeSearch_DFS_Interactive();       continue;
            case 'c': Run_BinaryTreeSearch_BFS();                   continue;
            case 'd': Run_Dynamic_Programming_Kadane();             continue;
            case 'e': Run_Dynamic_Programming_Knapsack_0_1();       continue;
            case 'f': Run_Dynamic_Programming_LCS();                continue;
            case 'g': Run_Dynamic_Programming_LPS();                continue;
            case 'h': Run_Graph_Floyd();                            continue;
            case 'i': Run_Greedy_Kruskal();                         continue;
            case 'j': Run_Greedy_Dijkastra();                       continue;
        }
        break;
    }

    return 0;
}
