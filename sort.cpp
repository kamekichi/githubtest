#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

int main() {
    int aiTable[5] = { 3, 2, 6, -2, 2 };            // �z���p�ӂ���B
    sort(aiTable, aiTable + 5, greater<int>());  // �v���f�B�P�[�g greater �ŋt���Ƀ\�[�g����B
    {for (int iIndex = 0; iIndex < 5; iIndex++) {
        cout << aiTable[iIndex] << ", ";            // ���ʂ��v�����g���Ă݂�B
    }}
    return 0;
}