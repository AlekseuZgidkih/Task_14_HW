#pragma once
#include <iostream>
#include <string>

using namespace std;
const int MaxBranchNum = 26;

class TrieNode {
public:
    string word;
    int path;           // ����������� ������� - ���������� ����� � ��������� ���������� ������
    int End;            // ������, ��������������� ���� ��������

    TrieNode* nexts[MaxBranchNum];

    TrieNode()
    {
        word = "";
        path = 0;
        End = 0;
        memset(nexts, NULL, sizeof(TrieNode*) * MaxBranchNum);
    }

};

class TrieTree {
private:
    TrieNode* root;
public:
    TrieTree();
    ~TrieTree();
    void destory(TrieNode* root);       // �������� ����
  
    void insert(string str, int n);     //  ��������� ������ str
    
    int search(string str);             // ���������, ��������� �� ������ str, � ���������� ��� ������� ��������� ���
        
    void printAll();                    // ������������� ��� ���� � ������
   
    void printPre(string str);          // ������� ����� � ��������� str

    void Print(TrieNode* root);         // ������� ��� ����� � ������ � ������������������ �������

    int prefixNumbers(string str);      // ���������� ���������� ���� � ��������� str
};
