#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main()
{

    string s;
    cout << "Enter the string to tokenize: ";
    getline(cin, s);

    const char* keywords[] = {"int", "return", "if", "while", "float", "double"};
    const char* operators[] = {"+", "-", "*", "/", "=", "++", "==", "!="};
    const char symbols[] = {'(', ')', '{', '}', ';', ','};

    vector<string> keywordTokens;
    vector<string> identifierTokens;
    vector<string> operatorTokens;
    vector<string> symbolTokens;
    int keywordCount = 0, identifierCount = 0, operatorCount = 0, symbolCount = 0,
        integerCount = 0, floatCount = 0, totalTokens = 0;
    char token[100] = "";
    int pos = 0;
    int numKeywords = sizeof(keywords) / sizeof(keywords[0]);
    int numOperators = sizeof(operators) / sizeof(operators[0]);
    int numSymbols = sizeof(symbols) / sizeof(symbols[0]);
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == '_')
        {
            token[pos++] = c;
        }
        else
        {
            if (pos > 0)
            {
                token[pos] = '\0';
                totalTokens++;

                int isKeyword = 0;
                for (int j = 0; j < numKeywords; j++)
                {
                    if (strcmp(token, keywords[j]) == 0)
                    {
                        keywordCount++;
                        keywordTokens.push_back(token);
                        isKeyword = 1;
                        break;
                    }
                }
                if (isKeyword == 0)
                {
                    int hasDot = 0;
                    int isInteger = 1;
                    for (int j = 0; token[j] != '\0'; j++)
                    {
                        if (token[j] == '.')
                        {
                            hasDot = 1;
                            isInteger = 0;
                        }
                        else if (token[j] < '0' || token[j] > '9')
                        {
                            isInteger = 0;
                            break;
                        }
                    }
                    if (hasDot && !isInteger)
                    {
                        floatCount++;
                        identifierTokens.push_back(token);
                    }
                    else if (isInteger)
                    {
                        integerCount++;
                        identifierTokens.push_back(token);
                    }
                    else
                    {
                        identifierTokens.push_back(token);
                    }
                }
                pos = 0;

            }
            for (int j = 0; j < numSymbols; j++)
            {
                if (c == symbols[j])
                {
                    symbolCount++;
                    totalTokens++;
                    symbolTokens.push_back(string(1, c));
                    break;
                }
            }
            for (int j = 0; j < numOperators; j++)
            {
                int opLen = strlen(operators[j]);
                if (s.substr(i, opLen) == operators[j])
                {
                    operatorCount++;
                    totalTokens++;
                    operatorTokens.push_back(operators[j]);
                    i += opLen - 1;
                    break;
                }
            }
        }
    }
    if (pos > 0)
    {
        token[pos] = '\0';
        totalTokens++;
        int isKeyword = 0;
        for (int j = 0; j < numKeywords; j++)
        {
            if (strcmp(token, keywords[j]) == 0)
            {
                keywordCount++;
                keywordTokens.push_back(token);
                isKeyword = 1;
                break;
            }
        }
        if (isKeyword == 0)
        {
            int hasDot = 0;

            int isInteger = 1;
            for (int j = 0; token[j] != '\0'; j++)
            {
                if (token[j] == '.')
                {
                    hasDot = 1;
                    isInteger = 0;
                }
                else if (token[j] < '0' || token[j] > '9')
                {
                    isInteger = 0;
                    break;
                }
            }
            if (hasDot && !isInteger)
            {
                floatCount++;
                identifierTokens.push_back(token);
            }
            else if (isInteger)
            {
                integerCount++;
                identifierTokens.push_back(token);
            }
            else
            {
                identifierTokens.push_back(token);
            }
        }
    }
// Output results
    cout << "Total tokens: " << totalTokens << endl;
    cout << "Keywords: " << keywordCount << " ";
    for (const auto& kw : keywordTokens)
    {
        cout << kw << " ";
    }
    cout << endl;
    cout << "Identifiers: " << identifierCount << " ";
    for (const auto& id : identifierTokens)
    {
        cout << id << " ";
    }

    cout << endl;
    cout << "Operators: " << operatorCount << " ";
    for (const auto& op : operatorTokens)
    {
        cout << op << " ";
    }
    cout << endl;
    cout << "Symbols: " << symbolCount << " ";
    for (const auto& sym : symbolTokens)
    {
        cout << sym << " ";
    }
    cout << endl;
    cout << "Integer Constants: " << integerCount << endl;
    cout << "Floating Constants: " << floatCount << endl;
    return 0;
}
