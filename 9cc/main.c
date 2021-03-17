#include "9cc.h"

// 入力プログラム
char *user_input;
// 現在着目しているトークン
Token *token;
Node *code[100];

int main(int argc, char **argv) {
	if (argc != 2)
		error("引数の個数が正しくありません");

	user_input = argv[1];
	tokenize();
	program();
	codegen();

	return 0;
}
