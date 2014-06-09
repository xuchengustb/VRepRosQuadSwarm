/*
 * LRTAstar.h
 *
 *  Created on: May 9, 2014
 *      Author: francescow
 */

#ifndef LRTASTAR_H_
#define LRTASTAR_H_

#include <vector>
#include <fstream>
#include "graphStructs.h"

using std::vector;

class LRTAstar
{
  int gridSizeX;
  int gridSizeY;
  int currentNode;
  int nextNode;
  vector<graphNode> graphNodes;
  vector<int> access_vec;       //It could be "bool" but I left "int" for future map developments
  vector<int> unvisited;
  int unvisitedCount;


  int numFreeNodes;
  vector<int> finalPath;
  vector<int> finalCountMap;

  void loadMatrixFile(std::ifstream &access_mat);

public:
  LRTAstar();
  LRTAstar(std::ifstream & INFILE);
  virtual ~LRTAstar();

  void initGraph(std::ifstream & INFILE);
  void incrCount(int currIndex, int nextIndex, bool nextType);
  void findNext();
  float getCurrentCoord(char coordinate);
  bool getCurrType();
  bool getNextType();
  bool isCompleted();

  int getCurrentIndex() const
  {
    return currentNode;
  }

  const vector<int>& getFinalCountMap() const
  {
    return finalCountMap;
  }

  const vector<int>& getFinalPath() const
  {
    return finalPath;
  }

  int getNumFreeNodes() const
  {
    return numFreeNodes;
  }

  int getNextIndex() const
  {
    return nextNode;
  }
};

#endif /* LRTASTAR_H_ */