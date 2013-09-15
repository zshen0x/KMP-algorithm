#include <iostream>
#include "kmpStringMatch.h"

int main(void)
{
    std::vector<int> matchtable;
    string ptrn("abaabab");
    string src("ababcbababcababcababcabcababbabcababc");
    kmpStringMatch match(ptrn, &src);

    match.getNext();
    matchtable = match.search();
    std::vector<int>:: iterator iter = matchtable.begin();
    for (; iter < matchtable.end(); iter++) {
        cout << *iter << ' ';
    }
    return 0;
}
