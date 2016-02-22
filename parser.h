/*
* MIHIR BISWAL	2012B2A7767P
* ASHISH TILOKANI 2012B3A7563P
*/

void createParseTable(Grammar *G, Table *T);
ParseTree* parseInputSourceCode(char *testcaseFile, Table *T);
void printParseTree(ParseTree *PT, char *outfile);