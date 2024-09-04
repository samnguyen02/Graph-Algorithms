#pragma once

#include <unordered_map>

#include "weighted-graph.hpp"
#include "graph-types.h"

template <typename T>
void computeIndegrees(const WeightedGraph<T>& graph, std::unordered_map<value_type<T>, int>& indegrees) {
    // TODO store the indegree for each vertex in the graph in the indegrees map
    for (auto it = graph.begin(); it != graph.end(); it++) {
        indegrees[it->first] = 0;
    }

    for (auto it = graph.begin(); it != graph.end(); it++) {
        for (auto adj_it = it->second.begin(); adj_it != it->second.end(); adj_it++) {
            indegrees[adj_it->first]++;
        }
    }
}
