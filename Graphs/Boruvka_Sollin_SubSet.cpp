/**
    File    : Boruvka_Sollin_SubSet.cpp
    Author  : Menashe Rosemberg
    Created : 2019.03.10            Version: 20190311.1

    Greedy - Minimum Spanning Tree - Boruvka_Sollin SubSet

    BSD License

    Copyright (c) 2019 TheArquitect (Menashe Rosemberg) rosemberg@ymail.com

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:

    1. Redistributions of source code must retain the above copyright notice, this
       list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright notice,
       this list of conditions and the following disclaimer in the documentation
       and/or other materials provided with the distribution.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
    DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
    ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
    (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
    LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
    ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
    (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
    SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**/
#include "Boruvka_Sollin_SubSet.h"

Boruvka_Sollin_SubSet::Boruvka_Sollin_SubSet(VertexType NOfVertices) : subset(NOfVertices, NOTSET) {}

VertexType Boruvka_Sollin_SubSet::InternalSearch(VertexType Vertex) const {
           if (this->subset[Vertex] == NOTSET)
              return Vertex;

        return InternalSearch(subset[Vertex]);
}

void Boruvka_Sollin_SubSet::Union(VertexType v1, VertexType v2) {
     VertexType v1_set = InternalSearch(v1);
     VertexType v2_set = InternalSearch(v2);

     this->subset[v1_set] = v2_set;
}
