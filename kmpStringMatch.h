#ifndef KMPMATCH_HEAD
#define KMPMATCH_HEAD
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class kmpStringMatch
{
public:
    kmpStringMatch(string ptrn, ifstream *fileptr);
    kmpStringMatch(string ptrn, string *src);
    ~kmpStringMatch();

    void getNext();
    vector<int> search();
private:
    string ptrn;
    string *src;
    ifstream *fileptr;
    int *next;

    //get partial matchTable from ptrn
    void buildNextArray();
    //void matchAux(int last);
};

#endif
