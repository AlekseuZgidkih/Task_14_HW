#include "trie.h"
using namespace std;
int main()
{	
	TrieTree trie;

	string out_key[10];
	string keys[] = {	"abba",		"academy",	"amene",	"audile",
						"beamish",	"bible",	"builder",	"buccaneer",
						"cabbalism","chaise",	"crack",	"czar",
						"dabster",	"doable",	"dystrophic","djakarta",
						"nowar",	"each",		"edge",		"epic", };


	int n = sizeof(keys) / sizeof(keys[0]);

	for (int i = 0; i < n; i++)		// записываем слова в дерево
	{
		trie.insert(keys[i], i);
	}

	string str = "";

	while (true)
	{
		cout << "0-exit, input prefix: ";
		cin >> str;
		if (str == "0")
			return 0;

		trie.printPre(str);

	cout <<"number of options: "<< trie.prefixNumbers(str)  << "\n";		
		str = "";
	}

}