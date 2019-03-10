/**
    File    : Kruskal.cpp
    Author  : Menashe Rosemberg
    Created : 2019.03.01            Version: 20190301.1

    Greedy - Minimum Spanning Tree - Kruskal

    Menashe Rosemberg   Israel +972-52-323-0538
    Copyright(c) 2019      All rights reserved.

    Software distributed under the MIT License is distributed on an "AS IS" BASIS,
    NO WARRANTIES OR CONDITIONS OF ANY KIND, explicit or implicit.
**/
#include "Kruskal.h"

Kruskal::Kruskal(vector<Edge>& edges) : Edges(edges), QOfVertices(TotOfVertices(Edges)) {}

ResultType Kruskal::ProcessKruskal() {
           sort(Edges.begin(), Edges.end(), [](const Edge& e1, const Edge& e2) { return e1.Weight() < e2.Weight(); });

           Kruskal_SubSet subset(QOfVertices);

           for (uint32_t IIt = 0; IIt < Edges.size(); ++IIt)
               if (subset.isNOTACycle(Edges[IIt]))
                  VertexList.emplace_back(Edges[IIt]);

           return VertexList;
}
