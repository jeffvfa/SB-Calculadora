/*
 * File:   calculadora.h
 * Author: Matheus de Oliveira Vieira	13/0126420
 */

void editar(char *expr);

int testarExpr(char *expr);

int Prioridade(char c, char t);

void In2Pos(char expr[]);

double calcular(char *expr);
