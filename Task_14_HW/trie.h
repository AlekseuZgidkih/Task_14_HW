#pragma once
#include <iostream>
#include <string>

using namespace std;
const int MaxBranchNum = 26;

class TrieNode {
public:
    string word;
    int path;           // пересечение символа - количество строк с префиксом символьной строки
    int End;            // Строка, заканчивающаяся этим символом

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
    void destory(TrieNode* root);       // удаление узла
  
    void insert(string str, int n);     //  Вставляем строку str
    
    int search(string str);             // Проверяем, появилась ли строка str, и возвращаем как префикс несколько раз
        
    void printAll();                    // Распечатываем все узлы в дереве
   
    void printPre(string str);          // Вывести слова с префиксом str

    void Print(TrieNode* root);         // Выводим все слова с корнем в лексикографическом порядке

    int prefixNumbers(string str);      // Возвращает количество слов с префиксом str
};
