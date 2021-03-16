#include "9cc.h"

// 入力プログラム
char *user_input;
// 現在着目しているトークン
Token *token;

int main(int argc, char **argv) {
	if (argc != 2)
		error_at(token->str, "引数の個数が正しくありません");

	user_input = argv[1];
	token = tokenize(user_input);
	Node *node = parse();
	codegen(node);

	return 0;
}
